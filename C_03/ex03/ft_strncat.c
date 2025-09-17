#include <unistd.h>
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

/*int main(int argc, char *argv[])
{
    char    dest1[10] = "Hello";
    char    dest2[10] = "Hello";
    char    *src = " World!";
    unsigned int    n = 4;
    if(argc == 4)
    {
        strcpy(dest1, argv[1]);
        strcpy(dest2, argv[1]);
        src = argv[2];
        n = atoi(argv[3]);
    }
    printf("ft_strncat: %s\n", ft_strncat(dest1, src, n));
    printf("strncat:    %s\n", strncat(dest2, src, n));
    return(0);
}*/