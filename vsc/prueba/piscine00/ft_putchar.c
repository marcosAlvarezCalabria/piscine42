#include <unistd.h>
void ft_putchar(char *c)
{
    while (*c){
        write(1, c, 1);
        c++;
    }

}
int main (){
    
    ft_putchar("hola");
    return 0;
}