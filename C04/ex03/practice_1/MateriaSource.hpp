#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSoure : public IMateriaSource
{
public:
	MateriaSoure(void);
	MateriaSource(const MateriaSource& other);
	~IMateriaSource(void);

	MateriaSource&	operator=(const MateriaSource& other);

	void			learnMateria(AMateria* m);
	AMateria*		createMateria(const std::string& type);
private:
	int				mCount;
	AMateria*		mSources[4];
};

#endif