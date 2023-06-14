#ifndef CURE_HPP
#define CURE_HPP

# include "Materia.hpp"

class ICharacter;

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &src);
		virtual ~Cure(void);

		Cure &operator=(Cure const &rhs);

		virtual void use(ICharacter &target);
		virtual AMateria *clone() const;
};

#endif