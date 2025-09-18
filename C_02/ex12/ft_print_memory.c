#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_puthex(unsigned char c, int uppercase)
{
	char	*hex_digits;
	char	buffer[3];
	
	if (uppercase)
		hex_digits = "0123456789ABCDEF";
	else
		hex_digits = "0123456789abcdef";
	
	// Convert the byte to hex
	buffer[0] = hex_digits[(c >> 4) & 0xF];  // High nibble
	buffer[1] = hex_digits[c & 0xF];         // Low nibble
	buffer[2] = ' ';
	
	write(1, buffer, 3);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)addr;
	if (size == 0)
		return (0);
	printf("%p: ", addr);
	while (i < size)
	{
		ft_puthex(ptr[i], 0);
		if ((i + 1) % 2 == 0)
			write(1, " ", 1);
		i++;
	}
	write(1, " ", 1);
	i = 0;
	while (i < size)
	{
		if (ptr[i] >= 32 && ptr[i] <= 126) // Printable characters
			write(1, &ptr[i], 1);
		else
			write(1, ".", 1); // Non-printable characters as dots
		i++;
	}
	write(1, "\n", 1);
}

int	main(int agrc, char *argv[])
{
	unsigned int	len;
	
	if (argc != 2)
	{
		write(1, "Usage: ./program string\n", 24);
		return (1);
	}
	
	// Calculate string length
	len = 0;
	while (argv[1][len] != '\0')
		len++;
	
	// Print memory representation
	*ft_print_memory(argv[1], len);
	
	// Print original string
	ft_putstr(argv[1]);
	return (0);
}