/*$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>*/

#include<unistd.h>

int main(int argc,char *argv[])
{
    int i;
    i = 0;
    if (argc == 2)
    {
        while(argv[1][i])
        {
            i++;
        }
        i--;
        while(argv[1][i] <= 32)
        {
            i--;
        }
        while(argv[1][i] > 32)
        {
            i--;
        }
        i++;
        while(argv[1][i])
        {
            write(1,&argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}