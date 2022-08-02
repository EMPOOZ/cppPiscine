/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:08:21 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/27 15:08:26 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	{
		Bureaucrat	gerard("Gerard", 150);
		Bureaucrat	christian("Christian", 1);

		std::cout << gerard << std::endl;
		std::cout << christian << std::endl;

		gerard.increaseRank();
		std::cout << gerard << std::endl;
		gerard.downGrade();
		std::cout << gerard << std::endl;

		try
		{
			gerard.downGrade();
		}
		catch (std::exception & e)
		{
			std::cout << "Error " << e.what() << std::endl;
		}

		try
		{
			christian.increaseRank();
		}
		catch (std::exception & e)
		{
			std::cout << "Error " << e.what() << std::endl;
		}
 
		std::cout << gerard << std::endl;
		std::cout << christian << std::endl;
	}

	std::cout << "-----------------------------" << std::endl;

	{
		try
		{
			Bureaucrat	michel("Michel", 151);
		}
		catch (std::exception & e)
		{
			std::cout << "Error " << e.what() << std::endl;
		}
 
		try
		{
			Bureaucrat	jj("Jean-Jacques", -7);
		}
		catch (std::exception & e)
		{
			std::cout << "Error " << e.what() << std::endl;
		}
	}
	return(0);
}