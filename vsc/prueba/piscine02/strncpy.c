#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int count;
    count = 0;

    while (src[count] != '\0' && count < n)
    {
        dest[count] = src[count];
        count++;

    }
    dest[count] = '\0';
    printf ("esto es dest %s ", dest);
    return(dest);
    
    
}



int main(void){

   char  name[]="marcoshola";
   char copy[]="";

   int size =6;

   ft_strncpy(&copy , &name, size);

   return 0;


}