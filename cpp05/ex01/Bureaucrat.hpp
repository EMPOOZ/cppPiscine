/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:08:49 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/27 15:08:49 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
class Form;

class Bureaucrat{
	private:
		std::string const name;
		int rang;
	public:
		Bureaucrat(std::string const name, int rang);
		Bureaucrat(const Bureaucrat &bur);
		Bureaucrat();
		~Bureaucrat();
		void increaseRank(void);
		void downGrade(void);
		std::string getName(void) const;
		int getRang(void) const;
		void signForm(Form &fr);
		Bureaucrat	&operator=(const Bureaucrat &rhs);
		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream & operator<<(std::ostream &ostr, Bureaucrat const &bur);

#endif