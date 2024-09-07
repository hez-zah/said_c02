#include <stdio.h>

void ft_small(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
}

char    *ft_strcapitalize(char *str)
{
    int i;
    int tst;

    ft_small(str);
    tst = 1;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (tst)
                str[i] -= 32;
            tst = 0;
        }
        else if (str[i] >= '0' && str[i] <= '9')
            tst = 0;
        else
            tst = 1;
        i++;
    }
    return (str);
}

// int main()
// {
//     char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
//     printf("%s\n", ft_strcapitalize(s));
// }
