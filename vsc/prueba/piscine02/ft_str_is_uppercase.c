#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while(str[i]){
        if(str[i] > 'A' && str[i] <  'Z'){
            return (1);

        }
        i++;
    }

    return (0);

}

int main (void) {
    

    if(ft_str_is_uppercase("Haa")){
        printf("no hay minusculas");
    }else{
        printf("si hay minusculas");
    }

    return 0;
}