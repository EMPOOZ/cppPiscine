/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:10:07 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/27 15:10:08 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp" 
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern	someRandomIntern;
	Form	*rrf;

	rrf = someRandomIntern.makeForm("robotomy", "Bender");
	delete rrf;
	rrf = someRandomIntern.makeForm("shrubbery", "forrest");
	delete rrf;
	rrf = someRandomIntern.makeForm("pardon", "Juan");
	delete rrf;
	rrf = someRandomIntern.makeForm("BE A PIE", "Billy");
	delete rrf;
}