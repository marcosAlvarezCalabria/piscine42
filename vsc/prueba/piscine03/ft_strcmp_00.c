#include <stdio.h>+

//La función strcmp recibe dos parámetros que serán dos string,
 //y si son iguales nos devolverá un 0, 
 //y si no son iguales devolverá cualquier otro número.
 //si la primera cadena es mayor retornara un valor positivo y si es menor retornara un valor negativo.

int ft_strcmp(char *s1, char *s2)
{
    unsigned int i = 0; // Inicia el índice en 0

    // Itera mientras no se llegue al final de ninguna de las dos cadenas
    //esto asegura que el bucle continue hasta que una de las dos nop sea nula 
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        // Si los caracteres son diferentes, devuelve la diferencia
        if (s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
        i++; // Incrementa el índice para comparar el siguiente carácter
    }

    // Si llegamos aquí, es porque todas las comparaciones fueron iguales
    return 0;
}

int main(void)
{
    char s1[] = "bg";
    char s2[] = "b";

    // Si ft_strcmp devuelve 0, las cadenas son iguales
    if (ft_strcmp(s1, s2) == 0)
    {
        printf("SON IGUALES\n");
    }
    else
    {
        printf("NO SON IGUALES\n");
    }
    return 0;
}
