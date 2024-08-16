
#include <string.h>
#include <stdio.h>
int	count_alen(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
		{
			return (len);
		}
		len++;
		i++;
	}
	return (len);
}
int	main()
{
	char	str[] = "hfsbahr";
	printf("%d", count_alen(str));
}
