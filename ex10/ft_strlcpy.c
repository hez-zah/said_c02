#include <stdio.h>

unsigned int ft_strlen(char *src)
{
    unsigned int j;

    j = 0;
    while (src[j])
        j++;
    return (j);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int len;

    i = 0;
    len = ft_strlen(src);
    if (size)
    {
        while (src[i] && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (len);
}
