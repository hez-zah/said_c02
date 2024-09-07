#include <stdio.h>

char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}

// int main()
// {
//     char s[] = "SA.iD";
//     printf("%s\n",ft_strlowcase(s));
// }