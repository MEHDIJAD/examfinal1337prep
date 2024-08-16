/*Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>*/

#include<unistd.h>

int main(int ac, char *av[])
{
    int s[256] = {0};
    int i;
    int j;
    i = 0;
    j = 1;
    if (ac == 3)
    {
        while(j < 3)
        {
            while(av[j][i])
            {
                s[(int)av[j][i]] = 1;
                i++;
            }
            i = 0;
            j++;
        }
        j = 1;
        while(j < 3)
        {
            while(av[j][i])
            {
                if (s[(int)av[j][i]] == 1)
                {
                    write(1, &av[j][i],1);
                    s[(int)av[j][i]] = 2;
                }
                i++;
            }
            i = 0;
            j++;
        }
    }
    write(1,"\n",1);

}