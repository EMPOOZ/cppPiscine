/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:49:13 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/21 12:49:13 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point {

public:
	Point( void );
	Point( Point const & src );
	Point( Fixed const x, Fixed const y );
	~Point( void );

	Point	&	operator= ( Point &a );

	Fixed	get_x() const;
	Fixed	get_y() const;

private:
	Fixed const	x;
	Fixed const	y;

};

#endif