/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:09:56 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/27 15:09:56 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
protected:
	std::string const _name;
	bool 			_sign;
	int const		_grade;
	int const		_grade_ex;
public:
	Form();
	Form(const Form &rhs);
	virtual ~Form();
	Form(std::string const name, int const grade, int const grade_ex);

	std::string const getName() const;
	bool getSign() const;
	int getGrade() const;
	int getGrade_ex() const;
	Form &operator=(const Form &rhs);
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

	class	NoExecutionExeption : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class	NoSignatureExeption : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	void	beSigned(Bureaucrat const & b);
	virtual void	execute(Bureaucrat const & exec) const;
};
std::ostream &operator<<(std::ostream &ostr, Form const &form);

#endif
