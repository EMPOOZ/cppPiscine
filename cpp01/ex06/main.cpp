/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:57:03 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:57:04 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void main_help(){

	Harl harl;
}

int main(int argc, char **argv){
	if (argc != 2){
		return 1;
	}
	Harl harl;
	harl.complain_help(argv[1]);
	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
}
