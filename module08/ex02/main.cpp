
#include "mutantstack.hpp"

int main(void) {
	/* MutantStack	st;

	st.push(10);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.push(6);
	std::cout << st.size() << "\n";

	std::cout << *st.begin() << "\n"; */
	MutantStack<int> mstack;

	mstack.push(50);
	mstack.push(17);
	std::cout << "top = " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "size = " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	//[...]

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	std::cout << "++it = " << *it << "\n";
	--it;
	std::cout << "--it = " << *it << "\n";

	while (it != ite) {
		std::cout << "*it = " << *it << std::endl;
	++it; }

	std::stack<int> s(mstack);

	std::cout << "\nLIST" << std::endl;


	std::list<int>	list;

	list.push_back(50);
	list.push_back(99);

	std::cout << "TOP = " << list.back() << std::endl;

	list.pop_back();

	std::cout << "Size = " << list.size() << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);

	//[...]
	list.push_back(0);

	std::list<int>::iterator itlist = list.begin();
	std::list<int>::iterator itliste = list.end();

	++itlist;
	--itlist;

	while(itlist != itliste) {
		std::cout << *itlist << std::endl;
		++itlist;
	}

	std::list<int> s2(list);

	std::cout << "\nMUTANTSTACK reverse" << std::endl;

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();

	++rit;
	--rit;

	while(rit != rite) {
		std::cout << *rit << std::endl;
		++rit;
	}

	std::cout << "\nLIST reverse" << std::endl;

	std::list<int>::reverse_iterator ritlist = list.rbegin();
	std::list<int>::reverse_iterator ritliste = list.rend();

	++ritlist;
	--ritlist;

	while(ritlist != ritliste) {
		std::cout << *ritlist << std::endl;
		++ritlist;
	}
	return 0;
}
