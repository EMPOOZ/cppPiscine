/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:08:19 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/27 15:08:25 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat{
	private:
		std::string const name;
		int rang;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &bur);
		Bureaucrat(std::string const name, int rang);
		~Bureaucrat();
		void increaseRank(void);
		void downGrade(void);
		std::string getName(void) const;
		int getRang(void) const;
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