#include <stdio.h>

int main()
{
   
   int num, resto;
   printf("Digite um número inteiro: ");
   scanf ("%d", &num);
   resto = num%2;
   if(resto==0)
   {
       printf("%d é par.", num);
   }else
    {
       printf("%d é ímpar.", num);   
    }
   
    return 0;
}
