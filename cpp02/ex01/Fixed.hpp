/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:48:29 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/21 12:48:37 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
 
class Fixed{
 
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(int i);
		Fixed(float i);

		~Fixed();
		Fixed &operator=(const Fixed &fixed);
		int		toInt(void) const;
		float	toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
};
	std::ostream &	operator<<( std::ostream & ostr, Fixed const & instance);
#endif