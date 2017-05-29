#ifndef DRAW_CLASS_HPP
# define DRAW_CLASS_HPP

#include <ncurses.h>
#include "Spaceship.class.hpp"
#include "Bullet.class.hpp"
#include "BulletEvent.class.hpp"
#include "EnemyEvent.class.hpp"
#include <unistd.h>
#include <sys/time.h>

class Draw {

	private:
		int		delay;
		Vector		pos;
		Vector		max;
		Vector		next;
		Spaceship	player;
		Bullet		bullet;
		Enemy			enemy;
		int		direction;
		int		c;
	public:
		Draw();
		Draw(Vector);
		Draw(Draw const &copy);
		Draw&	operator=( Draw const & draw);
		~Draw(void);
		void	gameLoop();
		void	handleEvents(int c, Spaceship *, BulletEvent *);
		void	draw(Spaceship *, BulletEvent *, EnemyEvent *);
		void	moveBullet(BulletEvent *, EnemyEvent *);
};

#endif
