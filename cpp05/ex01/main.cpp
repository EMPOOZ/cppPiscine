/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:08:57 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/27 15:08:57 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp" 

int main()
{
	Bureaucrat gerard("Gerard", 150);
	Bureaucrat christian("Christian", 1);
	Form a38("a38", 5, 7);

	std::cout << a38 << std::endl;
	gerard.signForm(a38);
	std::cout << a38 << std::endl;
	christian.signForm(a38);
	std::cout << a38 << std::endl;
}