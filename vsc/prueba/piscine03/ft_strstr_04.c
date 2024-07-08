#include <stdio.h>
//funcion auxiliar para comparar los dos strings una vez encontrados

int compare(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) { //si no son iguales retorna 0
            return 0;
        }
        i++;
    }
    return (str2[i] == '\0'); 
}

char *ft_strstr(char *str, char *to_find) {
     if (*to_find == '\0') {
         return str; // Si `to_find` es una cadena vacía, retorna `str`
     }

    int i = 0;
    while (str[i] != '\0') {//si no es nulo pasa al if 
        if (str[i] == to_find[0]) { // Comprueba el primer carácter si son iguales pasa al if del compare 
            if (compare(&str[i], to_find)) { // si compare da true retorna
                return &str[i]; // Retorna el puntero a la posición de inicio de la subcadena encontrada 
            }
        }
        i++;
    }
    return NULL; // No se encontró la subcadena
}

int main(void) {
    char str1[] = "hola que tal";
    char str2[] = "q";
    char *res = ft_strstr(str1, str2);

    if (res != NULL) {//
        printf("Subcadena encontrada: %s\n", res);
    } else {
        printf("Subcadena no encontrada.\n");
    }

    return 0;
}
