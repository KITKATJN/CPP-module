#ifndef __BASE_HPP__
#define __BASE_HPP__

#include <time.h>
#include <iostream>

class Base
{
private:
	/* data */
public:
	virtual ~Base();
};

class A : public Base
{
private:
	/* data */
public:
	A(/* args */);
	~A();
};

class B : public Base
{
private:
	/* data */
public:
	B(/* args */);
	~B();
};

class C : public Base
{
private:
	/* data */
public:
	C(/* args */);
	~C();
};

Base * generate(void);
void identify(Base& p);
void identify(Base* p);

#endif
