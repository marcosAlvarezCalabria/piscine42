#include <stdio.h>

int ft_str_is_alpha(char *str) {
    int count = 0;

    while (str[count]) {
        if ((str[count] < 'A' || str[count] > 'Z') && (str[count] < 'a' || str[count] > 'z')) {
            return 0;
        }
        count++;
    }
    return 1;
}

int main(void) {
    char letter[] = "aaa";  // Correctly initializing the array

    if (ft_str_is_alpha(letter)) {
        printf("The string is alphabetic.\n");
    } else {
        printf("The string is not alphabetic.\n");
    }

    return 0;
}

//si el string[count] es menor a A o el str[count] es mayor que Z me das 0 sino siempre 1