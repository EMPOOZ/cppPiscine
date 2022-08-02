/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:04:03 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/30 17:04:03 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <tgmath.h>

class Convert{
public:
	Convert();
	Convert(Convert &src);
	~Convert();

	Convert(std::string str);
	int getInt() const;
	char getChar() const;
	float getFloat() const;
	double getDouble() const;
	bool getIsChar() const;
	bool getIsInt()const;
	void printInt();
	void printChar();
	void printFloat();
	void printDouble();
	Convert &operator=(const Convert &rhs);

private:
	int _i;
	char _c;
	float _f;
	double _d;
	bool _is_int;
	bool _is_char;
};

#endif