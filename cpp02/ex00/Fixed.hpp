/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:48:22 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/21 12:48:33 by tconwy           ###   ########.fr       */
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
		Fixed(Fixed &fixed);
		~Fixed();
		Fixed &operator=(Fixed &fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};
 
#endif