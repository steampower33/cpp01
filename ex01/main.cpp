#include "Zombie.hpp"

int main(void)
{
	int N = 5;
	Zombie *z = zombieHorde(N, "Zombie");
	for (int i = 0; i < N; i++)
	{
		z[i].announce();
	}
	delete[] z;
	return 0;
}