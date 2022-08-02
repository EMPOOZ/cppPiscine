/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:36:04 by tconwy            #+#    #+#             */
/*   Updated: 2022/07/02 11:36:05 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template < typename T >
void iter(T * array, int array_lenght, void f(T const & f)){
	for (int i = 0; i < array_lenght; i++){
		f(array[i]);
	}
}
#endif