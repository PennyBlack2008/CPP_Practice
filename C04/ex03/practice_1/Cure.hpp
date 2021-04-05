#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	Cure : public Materia
{
	public:
		Cure(void);
		~Cure(void);
		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif;