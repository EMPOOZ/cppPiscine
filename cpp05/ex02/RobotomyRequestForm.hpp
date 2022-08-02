/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:09:33 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/27 15:09:33 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESFORM_HPP
#define ROBOTOMYREQUESFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form{
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
	std::string getTarget() const;
	void execute(Bureaucrat const & b) const;
private:
	std::string _target;
};

#endif
