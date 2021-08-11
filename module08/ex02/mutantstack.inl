
template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend(){
	return std::stack<T>::c.crend();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin(){
	return std::stack<T>::c.crbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(){
	return std::stack<T>::c.rend();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(){
	return std::stack<T>::c.rbegin();
}


template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend(){
	return std::stack<T>::c.cend();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin(){
	return std::stack<T>::c.cbegin();
}


template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
	return std::stack<T>::c.end();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
	return std::stack<T>::c.begin();
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &mutant){
	if (*this == &mutant)
		return *this;
	this->std::stack<T>::c = mutant.std::stack<T>::c;
	return *this;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &mutant):std::stack<T>(mutant){
}

template <typename T>
MutantStack<T>::MutantStack(/* args */):std::stack<T>()
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}
