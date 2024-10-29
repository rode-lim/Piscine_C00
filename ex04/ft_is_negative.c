#include <unistd.h>

void	ft_is_negative(int	n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

// int	main(void)
// {
// 	int	i = 1;
// 	int	c = 0;
// 	int	n = -3;

// 	write(1, "i: ", 3);
// 	ft_is_negative(i);
// 	write(1, "\n", 1);
// 	write(1, "c: ", 3);
// 	ft_is_negative(c);
// 	write(1, "\n", 1);
// 	write(1, "n: ", 3);
// 	ft_is_negative(n);
// 	write(1, "\n", 1);
// }
