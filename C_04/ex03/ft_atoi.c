#include <unistd.h>
//#include <stdio.h>

int ft_atoi(char *str)
{
    int result;
    int sign;
    int i;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-' )
            sign *= -1;
        i++;
    } 
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    } 
    return (sign * result);   
}

/*int main(void)
{
    //printf("'42': %i\n", ft_atoi("42"));
    //printf("'--42': %i\n", ft_atoi("--42"));
    printf("'\\n-4a2b': %i\n", ft_atoi("\n-4a2b"));
    printf("' --42bcd': %i\n", ft_atoi("--42bcd"));
    //printf("'-+-42': %i\n", ft_atoi("-+-42"));
    return (0);
}*/
