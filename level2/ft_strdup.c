
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

char    *ft_strdup(char *src)
{
    int i;
    char *copy;
    copy = malloc(sizeof(char) * strlen(src) + 1);
    if(!copy)
        return(NULL);
        i = 0;
    while(src[i])
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}

int	main(int argc, char *argv[])
{
	char *str;
	char *str1 = NULL;
	if(argc == 2)
    {
	str = ft_strdup(argv[1]);
    str1 = strdup(argv[1]);
	printf("%s", str);
    }
}

