#include <stdio.h> 
#include <math.h>
    
    int QtdDigitos(long int x)  
    {  
       int i=0;    
       while(x!=0)  
       {  
           x = x/10;  
           i++;  
       }  
         
       return i;
    }  

    int SomaDigitos(long int num)
    {
        int i=0;
        long int j = num;
        int soma =0;
        do
        { 
            j = (num)/(pow(10, i)); 
            soma = soma + (j % 10); 
            i++;
            
        }while ( i <= QtdDigitos(num) );
        
        return soma;
    }
    
    int main()
    {
        long int x;
        printf("Digite um numero: ");
        scanf ("%ld", &x);
        printf("\nA soma dos digitos é %d\n", SomaDigitos(x));
        return 0;
    }
