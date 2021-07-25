#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Animal* array[100];
	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	for (int i = 0; i < 100; i++)
	{
		delete array[i];
	}
	const Dog* d = new Dog();
	const Dog* d2 = new Dog(*d);
	d->makeSound();
	d2->makeSound();
	delete d;
	delete d2;
	const Cat* c = new Cat();
	const Cat* c2 = new Cat(*c);
	c->makeSound();
	c2->makeSound();
	delete c;
	delete c2;

	Brain p;
	for (int i = 0; i < 100; i++){
		p.ideas[i] = "hello";
	}
	Brain br = p;
	std::cout << br.ideas[23] << std::endl;
	br.ideas[23] = "goodbye";
	Brain ui(br);
	for (int i = 0; i < 30; i++){
		std::cout << ui.ideas[i] << std::endl;
	}
}
