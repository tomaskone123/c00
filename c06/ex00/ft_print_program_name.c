#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*temp;

	temp = argv[0];
	while (*temp)
	{
		write(1, temp, 1);
		temp++;
	}
	// printf("%s", temp);
	return (0);
}
