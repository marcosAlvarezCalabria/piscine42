#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;

	i = 'a';
	while (i >= 'a' && i <= 'z')
	{
		write (1, &i, 1);
		i++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return (0);
}
