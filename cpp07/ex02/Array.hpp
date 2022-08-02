/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:36:18 by tconwy            #+#    #+#             */
/*   Updated: 2022/07/02 11:39:37 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template < typename T >
class Array
{
private:
	T * _array;
	unsigned int _i;
public:
	Array() : _i(0){
		_array = new T[0];
	}
	~Array(){
		delete this->_array;
	}
	Array(unsigned int i) : _i(i){
		this->_array = new T[i];
	}
	Array( Array const & ref ) : _i(ref.size())
	{
		this->_array = new T[this->_i];
		for (unsigned int i = 0; i < this->_i; i++)
			_array[i] = ref.getArray()[i];
	}
	void operator=(Array &rf){
		this->_i = rf.size();
		delete this->_array;
		this->_array = new T[this->_i];
		for (unsigned int i = 0; i < this->_i; i++)
			_array[i] = rf.getArray()[i];
	}
	T &operator[](unsigned int y){
		if (static_cast<int>(y) < 0 || y >= this->_i)
			throw(std::exception());
		return (this->_array[y]);
	}
	T *getArray() const{
		return(_array);
	}
	unsigned int size() const{
		return(_i);
	}
};
#endif
