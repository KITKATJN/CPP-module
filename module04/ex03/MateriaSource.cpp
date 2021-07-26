#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ):number(0)
{
	for (int i = 0; i < 4; i++){
		materia[i] = nullptr;
	}
	std::cout << "Materia created" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < number; i++){
		delete materia[i];
	}
	std::cout << "Materia destroyed" << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const &materia ):number(0){
	for (int i = 0; i < materia.number; i++){
		this->learnMateria(materia.materia[i]->clone());
	}
	for (int i = 0; i < 4; i++){
		this->materia[i] = nullptr;
	}
}

MateriaSource &MateriaSource::operator=( MateriaSource const &materia ){
	for (int i = 0; i < number; i++){
		delete this->materia[i];
	}
	number = 0;
	for (int i = 0; i < materia.number; i++){
		this->learnMateria(materia.materia[i]->clone());
	}
	for (int i = 0; i < 4; i++){
		this->materia[i] = nullptr;
	}
	return *this;
}

void MateriaSource::learnMateria( AMateria *materia ){
	if (number == 4 || materia == nullptr)
		return ;
	// for (int i = 0; i < number; i++){
	// 	if (this->materia[i] == materia)
	// 		return ;
	// }
	this->materia[number] = materia;
	number++;
}

AMateria* MateriaSource::createMateria( std::string const & type ){
	for (int i = 0; i < number; i++){
		if (materia[i]->getType() == type)
			return (materia[i]->clone());
	}
	return nullptr;
}
