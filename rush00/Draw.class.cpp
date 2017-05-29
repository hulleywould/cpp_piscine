#include "Draw.class.hpp"

Draw::Draw() : delay(30000)
{
	initscr();
	noecho();
	cbreak();
	keypad(stdscr, true);
	curs_set(false);
	std::cout << "init screen" << std::endl;
	getmaxyx(stdscr, max.y, max.x);
}

Draw::Draw(Vector vec)
{
	Vector pos;
	pos = vec;
}

Draw::Draw(Draw const &copy)
{
	Vector pos;
	pos = copy.pos;
}

Draw&		Draw::operator=( Draw const & draw) {
    if (this != &draw) {
        *this = draw;
    }
    return *this;
};

Draw::~Draw(void)
{
	endwin();
}

void	Draw::handleEvents(int c, Spaceship *player, BulletEvent *bullet)
{
	switch(c)
	{
		case KEY_UP:
			if (player->getY() != 0)
				player->moveUp();
			break;
		case KEY_DOWN:
			if (player->getY() < max.y)
				player->moveDown();
			break;
		case KEY_RIGHT:
			if (player->getX() < max.x)
				player->moveRight();
			break;
		case KEY_LEFT:
			if (player->getX() != 0)
				player->moveLeft();
			break;
		case 32:
			bullet->createBullets(player->getX() + 1, player->getY());
			break;
		default:
			break;
	}
}

void	Draw::draw(Spaceship *player, BulletEvent *bullets, EnemyEvent *enemies)
{
	clear();
	int	i = 0;
	Bullet *allbullets = bullets->getBullet();
	Enemy *allenemies = enemies->getEnemy();
	mvprintw(player->getY(), player->getX(), player->getAvatar());
	while (i < bullets->getNumBullet())
	{
		mvprintw(allbullets[i].getY(), allbullets[i].getX(), "-");
		i++;
		refresh();
	}
	i = 0;
	while (i < enemies->getNumEnemy())
	{
		mvprintw(allenemies[i].getY(), allenemies[i].getX(), "<");
		i++;
		refresh();
	}
}

void	Draw::gameLoop()
{
	struct timeval start;
	struct timeval end;
	int		loop = 0;
	Spaceship	player;
	BulletEvent	bullet;
	EnemyEvent	enemy;
	draw(&player, &bullet, &enemy);
	while(true)
	{
		gettimeofday(&start, NULL);
		nodelay(stdscr, true);
		c = getch();
		handleEvents(c, &player, &bullet);
		if (loop % 25 == 0)
			enemy.createEnemies();
		bullet.updateBullets();
		enemy.updateEnemies();
		draw(&player, &bullet, &enemy);
		loop++;
		gettimeofday(&end, NULL);
		usleep(60000 - (end.tv_usec - start.tv_usec));
	}
}
