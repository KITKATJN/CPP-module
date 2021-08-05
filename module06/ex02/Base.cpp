#include "Base.hpp"

Base * generate(void){
	int b = rand() % 3;
	switch (b)
	{
	case 0:
		std::cout << "generate A class" << std::endl;
		return new A();
		break;
	case 1:
		std::cout << "generate B class" << std::endl;
		return new B();
		break;
	case 2:
		std::cout << "generate C class" << std::endl;
		return new C();
		break;
	default:
		break;
	}
	return nullptr;
}

void identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "This is A type" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "This is B type" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "This is C type" << std::endl;
}

void identify(Base& p){
	try
	{
		A a = dynamic_cast<A&>(p);
		a.~A();
		std::cout << "This is A type" << std::endl;
	}
	catch(const std::exception& e){}
	try
	{
		B b = dynamic_cast<B&>(p);
		b.~B();
		std::cout << "This is B type" << std::endl;
	}
	catch(const std::exception& e){}
	try
	{
		C c = dynamic_cast<C&>(p);
		c.~C();
		std::cout << "This is C type" << std::endl;
	}
	catch(const std::exception& e){}
}

C::C(/* args */)
{
}

C::~C()
{
}

B::B(/* args */)
{
}

B::~B()
{
}

A::A(/* args */)
{
}

A::~A()
{
}

Base::~Base()
{
}
