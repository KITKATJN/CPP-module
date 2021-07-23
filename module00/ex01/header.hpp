#ifndef HEADER_H
# define HEADER_H

# include <iostream>
# include <string>
# include <iomanip>

# define NUM_CONTACTS 8

class Contact {
	public:
	void		set_contact( void );
	std::string	get_contact(std::string str_contact);

	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	darkest_secret;
		std::string	phone_number;
};

class Phonebook {
	public:
		Phonebook( void );
		int	fill;
		int	get_fill( void );
		void	add_contact(int index);
		void	print_phonebook();
		void	search_contact(int index);

	private:
		Contact contacts[NUM_CONTACTS];
};

std::string	truncate(std::string str);

#endif
