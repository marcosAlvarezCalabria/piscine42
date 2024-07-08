#include <unistd.h>
//concatena dest + src

char *ft_strcat(char *dest,  char *src)
{
    int i = 0;
    int j = 0;

    // Encontrar el final de la cadena dest pàra saber donde empezar a copiar 
    while (dest[i] != '\0')
    {
        i++;// i sera el final de 
    }

    // Agregar src a dest
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }

    // Añadir el terminador nulo al final de la cadena concatenada
    dest[i + j] = '\0';

    return dest;
}
int main(void){
    char dest[50]= "adios";
    char src[]= "hola";

    printf(ft_strcat(dest,src));
    return 0;
}