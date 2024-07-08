#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)//es una funcion qu recibe un char y tiene que mostrar un int 
  {
    int num_of_char;
    num_of_char = 0;//inicializamos num_of_char en 0 
    while (str[num_of_char])//mientras str[num_of_char] sea true
    {
      num_of_char++; //char ++
    }
    return (num_of_char);//return char 
 }
 int main (void)//esto solo funciona para numeros con menos de 9 digitos 
 
 {
    char str[]= "holahffffj";

    int res = ft_strlen(str) + 48;// res igual a lo que retorna la funcion ft_strlen + 49 ya que
                                  //retornara un numero y hay que convertortlo a char ya que write solo imprime char 

    write(1, &res, 2);
    return 0;
 }
