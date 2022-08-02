/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:53 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:54 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <iostream>
#include <fstream>
 
class Replace{
	public:
		Replace(std::string filename);
		~Replace();
		int replace(std::string s1, std::string s2);
	private:
		void inread(std::string &dest);
		void outwrite(std::string &str);
		std::ifstream file;
		std::ofstream newFile;
};
 
#endif
 