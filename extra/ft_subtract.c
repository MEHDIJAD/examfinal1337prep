//create a function that subtracts an integer from an integer pointed by a pointer.
//the parameters are an integer and a pointer pointing to an integer.
//it should be prototyped as such /void	ft_subtract(int a, int *ptr)


#include<unistd.h>
#include<stdio.h>

void    ft_substract(int a, int *ptr)
{
    *ptr = *ptr - a;

}

int main()
{
    int value = 10;
    ft_substract(3,&value);
    printf("%d", value);
}  