#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{

	int i;

	i= 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	printf ("esto es dest %s ", dest);
	return (dest);

}

int main(void){
	char name[] ="mas";
	char copy[] = "";

	ft_strcpy(&copy, &name);

	return 0;
}

	




