/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:30:32 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/13 12:30:33 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	if (argc != 1){
		for (int a = 1; a < argc; a++)
		{
			std::string str(argv[a]);
			for (size_t i = 0; i < str.length(); i++)
				std::cout << (char)std::toupper(str[i]);
		}
	}
	else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 1;
	}
	return 0;
}
