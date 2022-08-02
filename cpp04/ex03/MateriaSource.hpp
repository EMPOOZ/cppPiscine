#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class AMateria;
class IMateriaSource;

class MateriaSource : public IMateriaSource{
public:
	MateriaSource();
	~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
	MateriaSource &operator=(const MateriaSource &other);
private:
	AMateria *(item[4]);
};

#endif