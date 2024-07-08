#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if(str[i] < 48 || str[i] > 57)
        {
            return 0;
        }
        i++;
    };

    return 1;
}

int main(void){
    char str[]= "1";

    if(ft_str_is_numeric(str)){
        printf("%s es numerico" , str);
    }else {
         printf("%s no  es numerico" , str);
    }
return 0;
}