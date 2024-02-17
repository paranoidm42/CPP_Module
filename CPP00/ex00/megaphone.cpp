#include <iostream>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int x;
		int	y;

		y = 0;
		x = 0;
		while (av[++x])
		{
			y = 0;
			while (av[x][y])
				std::cout << (char)toupper(av[x][y++]);
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}

