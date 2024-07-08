#include <stdio.h>
char *ft_strcapitalize(char *str)
{
    int i;
    i = 0;
      

        while (str[i]) {
		if ((str[i - 1] < 47) && ((str[i] >= 'a') && (str[i] <= 'z'))) str[i] -= 32;
		i++;

    
      }

    
    return(str);
}

int main (void) {
    char prueba[] = "salut, comment tu çvas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(prueba);
    printf("esto es prueba \n %s " , prueba);
    return(0);
}