#include <stdio.h>
#include <math.h>

int main()
{
   
   float num, resto, denominador=2;
   
   printf("Digite um número: ");
   scanf ("%f", &num);
   
   resto = fmod(num, denominador);
   
   
   if(resto==0)
   {
       printf("%.2f é par.", num);
   }else
    {
       printf("%.2f é ímpar.", num);   
    }
   
    return 0;
}
