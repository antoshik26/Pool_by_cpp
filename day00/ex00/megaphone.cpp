#include <iostream>

int main(int argc, char **argv)
{	
	int i;
	int j;
	
	j = 0;
	i = 1;
	while(i < argc)
	{
		while(argv[i][j])
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				std::cout << (char)(argv[i][j] - 32);
			else
				std::cout << argv[i][j];
			j++;
		}
		i++;
	}
	return (0);
}