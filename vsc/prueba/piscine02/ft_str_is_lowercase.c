#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;
     i = 0;
    while(str[i]){
        if(str[i] < 'a' || str[i] > 'z')// Devolver 0 si encontramos un carácter que no es minúscula
        {
            return 0;
        }
        i++;

    }
    return 1;// Devolver 1 si todos los caracteres son minúsculas
}


int main (void)
{
    if(ft_str_is_lowercase("M")){
        printf(" no tiene mayusculas");
    } else {
        printf(" tiene mayusculas");
    }
    return 0;

}