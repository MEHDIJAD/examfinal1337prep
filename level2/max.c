/*Assignment name  : max
Expected files   : max.c
Allowed functions: 
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.*/
#include<stdio.h>
int		max(int* tab, unsigned int len)
{
    unsigned int i = 0;
    int max;
    if(len <= 0)
        return(0);
    max = tab[i];
    while(i <= len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);

}

int main()
{
    int array[] = {34,44,5,100,4,5,6,5,10,0};
    int i = 10;
    printf("%d", max(array, i));
}
