
/*Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>*/

#include<unistd.h>

int ft_letterps(char c)
{
    if (c >= 'a' && c <= 'z')
        return(c - 'a' + 1);
    else if (c >= 'A' && c <= 'Z')
        return(c - 'A' + 1);
    return (0);
}

int main(int argc, char *argv[])
{
    int j;
    int i;

     if (argc != 2) // Check if there is exactly 1 argument
    {
        write(1, "\n", 1);
        return (0);
    }
    i = 0;
    while(argv[1][i])
    {
        j = 0;
        while(j < ft_letterps(argv[1][i]))
        {
            write(1, &argv[1][i], 1);
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
}