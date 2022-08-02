/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:25 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:26 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
int		main( void )
{
	std::string	originalString = "HI THIS IS BRAIN";
	std::string *stringPTR = &originalString;
	std::string	&stringREF = originalString;
	std::cout << "orig: " << &originalString << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;

	std::cout << "orig: " << originalString << std::endl;
	std::cout << "stringPTR: " << originalString << std::endl;
	std::cout << "stringREF: " << originalString << std::endl;

} 