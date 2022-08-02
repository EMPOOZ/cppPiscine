/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:10:32 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/27 16:13:07 by tconwy           ###   ########.fr       */
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
	std::string getTarget() const;
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
	void execute(Bureaucrat const & b) const;

private:
	std::string _target;
};

#endif
