#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++){
		this->item[i] = NULL;
	}
	return;
}

MateriaSource::~MateriaSource(){
	return;
}

void		MateriaSource::learnMateria(AMateria* am)
{
	int i = 0;

	while (this->item[i])
		i++;
	if (i < 4)
		this->item[i] = am;
	return ;
}

MateriaSource &	MateriaSource::operator=( MateriaSource const & rhs )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->item[i])
			delete this->item[i];
		if (rhs.item[i])
			this->item[i] = rhs.item[i]->clone();
		else
			this->item[i] = NULL;
	}
	std::cout << "Assignement operator for MateriaSource called" << std::endl;
	return *this;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while(i < 4)
	{
		if (this->item[i] && this->item[i]->getType() == type)
		{
			return(this->item[i]->clone());
		}
		i++;
	}
	return(NULL);
}
