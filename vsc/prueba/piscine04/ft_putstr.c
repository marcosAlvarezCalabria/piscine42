#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;

	char copy;
	while (str[count])
	{
		write (1, &str[count], 1);
        copy= str[count];
		count ++;
	}
}
int  main (void)
{
	char str[] = "hola";
	ft_putstr(str);
	return 0;

}
