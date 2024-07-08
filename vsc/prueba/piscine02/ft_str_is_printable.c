#include <stdio.h> 
int ft_str_is_printable(char *str) 
{
    int i;
    i = 0;
    while (str[i]){
        if(str[i] >= 32 && str[i] <= 126){
            return (1);
        }
        i++;

    }
    return(0);
}

int main(void){
    if(ft_str_is_printable("aa")){
        printf( "no pritable");

    }else {
        printf(" pritable");
    }
}