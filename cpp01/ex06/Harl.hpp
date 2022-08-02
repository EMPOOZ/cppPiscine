/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:57:02 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:57:03 by tconwy           ###   ########.fr       */
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
	int i;
	enum filterLevel {
		levelDebug = 0,
		levelInfo,
		levelWarning,
		levelError,
		levelInsignificant = -1
	};

	void complain(std::string level);
	void switch_case(int level);
	void complain_help(std::string lvl);
private: 
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};
#endif
