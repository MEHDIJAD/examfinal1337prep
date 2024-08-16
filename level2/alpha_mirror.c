/*Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>*/

#include<unistd.h>
void    ft_print_alpha(char c)
{
    if(c >= 'a' && c <= 'z')
        c = 'z' - (c - 'a');
    if(c >= 'A' && c <= 'Z')
        c = 'Z' - (c - 'A');
    write(1,&c,1);
}
int main(int argc, char *argv[])
{
    int i;
    i = 0;
    if(argc == 2)
    {
        while(argv[1][i])
        {
            ft_print_alpha(argv[1][i]);
            i++;
        }
    }
    write(1, "\n",1);
}