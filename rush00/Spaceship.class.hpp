#ifndef SPACESHIP_H
# define SPACESHIP_H

# include "Character.class.hpp"

class Spaceship : public Character {

	protected:
		Spaceship	*player;
		Vector		pos;
	public:
	    Spaceship( void );
        Spaceship( Spaceship const & );
        Spaceship& operator=( Spaceship const & );
        ~Spaceship( void );
};

#endif
