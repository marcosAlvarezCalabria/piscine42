#include <unistd.h>

char *ft_strncat(char *dest, const char *src, unsigned int nb) {
    int i = 0;
    int j = 0;

    // Encuentra el final de la cadena `dest`
    while (dest[i] != '\0') {
        i++;
    }

    // Añade `nb` caracteres de `src` a `dest`
    while (src[j] != '\0' && j < nb) {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Añade el terminador nulo al final
    dest[i] = '\0';

    return dest;
}

int main(void) {
    char dest[20] = "hola";  // Asegúrate de que `dest` tenga suficiente espacio para la concatenación
    char src[] = "adios";
    unsigned int nb = 5;
    char *res;

    res = ft_strncat(dest, src, nb);

    // Calcular la longitud de la cadena resultante
    int len = 0;
    while (res[len] != '\0') {
        len++;
    }

    // Escribir la cadena concatenada completa
    write(1, res, len);

    return 0;
}


