#include <stdio.h>
//concatena n caracteres de src en dest 
// return des  
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0'){// mientras que no sea nulo/ vacio i++;
        i++;//con esto sabemos el primer valor nulo de dest para empezar 
            //a copiar desde ahi.
    }
    while (src[j] != '\0' &&  (j < nb)){
        dest[i+j] = src[j];
        j++;
    }
    dest[j+i] = '\0';

    printf("esto es dest %s/\n" , dest);

    printf("esto es src %s\n" , src);

    return dest;
}
int main(void){
    char dest[50]= "hola";
    char src[]= "mundo";
    unsigned int nb = 3;
    ft_strncat(dest, src, nb);
    return 0;
}