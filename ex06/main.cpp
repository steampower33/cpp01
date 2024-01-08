#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error : The number of parameters is incorrect" << std::endl;
		return 1;
	}
	Harl h;

	h.complain(argv[1]);
	return 0;
}