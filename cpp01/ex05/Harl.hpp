/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:56 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:57 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#ifndef REPLACE_H
#define REPLACE_H

class Harl{
public:
	Harl();
	~Harl();

	void complain(std::string level);
private: 
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};
#endif
