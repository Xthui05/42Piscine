#include <unistd.h>
#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(int argc, char *argv[])
{
    //char    buffer[10];
    char    *r;
    if(argc != 3)
        return (1);
    //ft_strcat(buffer, argv[1]);
    r = ft_strcat(argv[1], argv[2]);
    printf("%s\n", r);
    return (0);
}