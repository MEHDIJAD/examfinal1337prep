
#include <unistd.h>
#include <stdio.h>

int	count_words(char *str)
{
	int i;
	int j;
	int F;
	i = 0;
	j = 0;
	F = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			j = 0;
		}
		else if (j == 0)
		{
			j = 1;
			F++;
		}
		i++;
	}
	return (F);
}
int	main()
{
	char	str[] = "hafsa majda aya";
	printf("%d", count_words(str));
}
