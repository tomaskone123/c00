#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*temp;

	i = 1;
	while(i < argc)
	{
		temp = argv[i];
		while (*temp)
		{
			write(1, temp, 1);
			temp++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
