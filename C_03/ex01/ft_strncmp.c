#include <unistd.h>
//#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (i < n && (s1[i] != '\0') && (s2[i] != '\0'))
    {
        if(s1[i] != s2[i])
            return(s1[i] - s2[i]);
        i++;
    }
    return(s1[i] - s2[i]);
}

/*int main(int argc, char *argv[])
{
    int diff;

    if(argc != 3)
    {
        return(0);
    }
    diff = ft_strncmp(argv[1], argv[2], 10);
    printf("Different: %i", diff);
    return(0);
}*/