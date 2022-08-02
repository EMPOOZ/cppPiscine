/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:09:37 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/27 15:09:38 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIOMFORM_HPP
#define SHRUBBERYCREATIOMFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <iomanip>
# include <fstream>

class ShrubberyCreationForm : public Form{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
	std::string getTarget() const;
	void execute(Bureaucrat const & b) const;

private:
	std::string _target;
};

#endif
