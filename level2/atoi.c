#include<stdio.h>
#include<stdlib.h>
int	ft_atoi(const char *str)
{
	int signe;
	int result;
	result = 0;
	signe = 1;
	while(*str == 32 || *str >= 9 && *str <= 13)
		str++;
	if(*str == '-')
		signe = -1;
	while(*str == '-' || *str == '+')
		str++;
	while(*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	} 
	return(result * signe);
}


int main(void)
{
    char str[] = "-1234aa567";
    printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}                 