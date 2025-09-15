#include <unistd.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;
    
    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        write(1, &dest[i], 1);
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        write(1, "\\0", 2);
        i++;
    }
    write(1, "\n", 1);
    return (dest);
}

/*int main(void)
{
    char    *src;
    unsigned int    size;
    char    dest[15];

    src = "Hello 42KL!";
    size = 15;
    ft_strncpy(dest, src, size);

    write(1, "Full dest: ", 11);
    for (unsigned int i = 0; i < size; i++)
    {
        if (dest[i] == '\0')
            write(1, "\\0", 2);
        else
            write(1, &dest[i], 1);
    }
    write(1, "\n", 1);
    return(0);
}*/