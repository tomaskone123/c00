#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	// printf("%d", argc);
	j = argc;
	printf("%d\n", j);
	i = 1;
	while (i < j)
	{
		// temp_i = argc;
		temp = argv[j];
		while (*argv)
		{
			write(1, argv[j], 1);
			argv[j]++;
		}
		// printf("%s", argv[argc])
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
