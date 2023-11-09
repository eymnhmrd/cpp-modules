#include <iostream>

int	main(int argc, char **argv)
{
	std::string av;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * "<< std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			av = argv[i];
			for (int j = 0; (size_t)j < av.length(); j++)
				std::cout << (char)std::toupper(av[j]);
		}
		std::cout << std::endl;
	}
	return (0);
}
