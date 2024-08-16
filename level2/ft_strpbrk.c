/*Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);*/

#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
 {
    const char *s2_iter;
    while (*s1) 
    {             // Iterate through each character of s1
         s2_iter = s2;
        while (*s2_iter) 
        {    // Iterate through each character of s2
            if (*s1 == *s2_iter) 
            {
                return (char *)s1;  // Cast to char* for return type compatibility
            }
            s2_iter++;
        }
        s1++;
    }
    return NULL;  // Return NULL if no character from s2 is found in s1
}

int main() {
    char str1[] = "abcdef324567";
    char str2[] = "0123456789";
    char *result = ft_strpbrk(str1, str2);
    if (result) {
        printf("%s\n", result);
    } else {
        printf("No characters from s2 found in s1\n");
    }
    return 0;
}
