/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:36:02 by tconwy            #+#    #+#             */
/*   Updated: 2022/07/02 11:36:03 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATER_HPP
#define WHATER_HPP

#include <iostream>

template <typename T>
T min(const T& lhs, const T& rhs)
{
	return lhs < rhs ? lhs : rhs;
}

template <typename T>
T max(const T& lhs, const T& rhs)
{
	return lhs > rhs ? lhs : rhs;
}

template <typename T>
void swap(T& lhs, T& rhs)
{
	T temp;

	temp = lhs;
	lhs = rhs;
	rhs = temp;
}

#endif