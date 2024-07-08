#include <unistd.h>

void ft_putchar(char c)//creamos putchar para llamarla cuando queramos copiar
{
    write (1, &c, 1);
}
void ft_putnbr(int nb)
{
    if (nb == -2147483648)// si nb es este numero rompemos el numero quitandole el menos y el 8
    {                     //y llamamos a putcahr para que vaya copiandolos

        ft_putchar('-'); //printeamos el -
        ft_putnbr(214748364);  // llamamos recursivamente la funcion para que imprima el numero
        ft_putchar('8');  // printamos el 8
    }
    else if (nb < 0) //si el numero es negativo
    {

        ft_putchar('-'); //printeamos el -
        ft_putnbr(-nb); //printeamos el numero en positivo
    }
    else if (nb >= 10)// si el numero es mayor o igual a 10 es decir mas de un digito ,lo partimos de uno en uno
    {

        ft_putnbr(nb / 10);// llamamos a la propia funcion con el ultimo numero
        ft_putchar('0' + (nb % 10)); // esto nos da el residuo del numero  ejemplo: si el numero es 123 . 123% 10 = 3 +48 = 51
                                     // si a cualquier numero le hacemos modulo de 10 simpre nos dara el ultimo digito .
                                    //que en ascii es el numero 3
    }
    else
    {

        ft_putchar('0' + nb); // 0 es 48 en ascii entonces sin a 48 le sumamso el numero en cuestion nos da ese
                              // numero Ej: nb = 5  ... 5 + 0 = 5; entonces imprimimos 5;
    }
}


int main(void)
{
    ft_putnbr(125);
    ft_putchar('\n');
    return 0;
}
