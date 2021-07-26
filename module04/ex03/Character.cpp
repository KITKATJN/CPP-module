#include "Character.hpp"

Character::Character( void ):name(""), fill(0){
	for (int i = 0; i < 4; i++){
		materia[i] = nullptr;
	}
}

Character::Character( std::string const &name ):name(name), fill(0){
	for (int i = 0; i < 4; i++){
		materia[i] = nullptr;
	}
}

Character::Character( Character const &character ):
	name(character.name),
	fill(0){
		for (int i = 0; i < character.fill; i++){
			this->equip(character.materia[i]->clone());
		}
		for (int i = this->fill; i < 4; i++){
			this->materia[i] = nullptr;
		}
}

Character::~Character(){
	for (int i = 0; i < fill; i++){
		delete materia[i];
	}
}

Character &Character::operator= ( Character const &character ){
	this->name = character.name;
	for (int i = 0; i < this->fill; i++){
		delete materia[i];
	}
	this->fill = 0;
	for (int i = 0; i < character.fill; i++){
		this->equip(character.materia[i]->clone());
	}
	for (int i = this->fill; i < 4; i++){
		this->materia[i] = nullptr;
	}
	return *this;
}

std::string const &Character::getName( void ) const{
	return name;
}

void Character::equip( AMateria *m){
	if (fill > 3 || m == nullptr)
		return ;
	for (int i = 0; i < this->fill; i++)
		if (this->materia[i] == m)
			return ;
	materia[fill] = m;
	fill++;
}

void Character::unequip( int idx ){
	if (idx < 0 || idx > fill || materia[idx] == nullptr)
		return ;
	for (int i = idx; i < 3; i++)
	{
		materia[i] = materia[i + 1];
		materia[i + 1] = nullptr;
	}
	materia[3] = nullptr;
	fill--;
}

void Character::use( int idx, ICharacter &target ){
	if (idx < 0 || idx >= fill || materia[idx] == nullptr)
		return ;
	materia[idx]->use(target);
}


