/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:48:56 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/21 12:48:56 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

Fixed formula (Point p1, Point p2, Point p3)
{
    return (p1.get_x() - p3.get_x()) * (p2.get_y() - p3.get_y())
	- (p2.get_x() - p3.get_x()) * (p1.get_y() - p3.get_y());
}

bool	bsp(Point a, Point b, Point c, Point p)
{
	Fixed d1, d2, d3;
    bool x1, x2;

    d1 = formula(p, c, a);
    d2 = formula(p, a, b);
    d3 = formula(p, b, c);
	if (d1 == 0 || d2 == 0 || d3 == 0)
		return (0);
    x1 = (d1 < 0) || (d2 < 0) || (d3 < 0);
    x2 = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(x1 && x2);
}