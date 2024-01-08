#include "Zombie.hpp"

int main(void)
{
	Zombie stack("first");
	Zombie *heap = newZombie("second");
	randomChump("third");

	stack.announce();
	heap->announce();
	delete heap;
	return 0;
}