/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:04:20 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/30 17:04:21 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data*		deserialize(uintptr_t raw);
uintptr_t	serialize(Data* ptr);

int main()
{
	Data		data("Je suis une data mutafukaz");
	Data *	ret;
	uintptr_t	ser;

	ser = serialize(&data);
	std::cout << ser << std::endl;
	ret = deserialize(ser);
	std::cout << ret->getSer() << std::endl;
}
