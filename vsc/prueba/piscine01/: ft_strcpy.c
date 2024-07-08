#include <unistd.h>
char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while(src[i]){
        dest[i] =  src[i];

        i++;
    }
    
}
int main (void) {

    char copy[12];
    char name[] = "marcos";
    ft_strcpy(copy, name);

    write(1 ,copy, 6);
    return (0);
}