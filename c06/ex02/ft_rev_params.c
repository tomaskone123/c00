#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	// printf("%d", argc);
	j = argc;
	i = 1;
	while (i < j)
	{
		// temp_i = argc;
		temp = argv[j];
		while (*temp)
		{
			write(1, temp, 1);
			temp++;
		}
		// printf("%s", argv[argc])
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
