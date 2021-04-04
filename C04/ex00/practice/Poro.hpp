#ifndef PORO_HPP
# define PORO_HPP

# include "Victim.hpp"

class Poro : public Victim
{
public:
	Poro(void);
	Poro(const std::string& name);
	Poro(const Poro& other);
	virtual ~Poro();

	Poro&	operator=(const Poro& other);

private:
	void	getPolymorphed(void) const;
};

#endif