#include <stdio.h>

int main()
{
    struct data 
    {
        int dia;
        int mes;
        int ano;
    };
    
    struct data inacio;
    inacio.mes = 6;
    inacio.dia = 22;
    inacio.ano = 2004;

    printf("%d", inacio.ano);
   
    return 0;
}