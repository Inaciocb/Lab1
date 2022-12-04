/*
Faça uma função que calcula as raízes reais de uma equação do segundo grau. Ela deve retornar as duas raízes através
de ponteiros, e deve ainda retornar um bool, que informa se as raizes são reais ou complexas(nesse último caso, as
raízes não são calculadas, e os valores apontados pelos ponteiros são mantidos inalterados).
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool raizes_reais(double a, double b, double c, double *x1, double *x2)
{
    double delta = b*b - 4 * (a*c);
    if(delta < 0)
        return false;
    else  
    {
        *x1 = (-b + sqrt(delta))/(2*a);
        *x2 = (-b - sqrt(delta))/(2*a);
        return true;
    } 
}

int main()
{
    double a, b, c, x1, x2;
    
    printf("Digite as variáveis(a, b e c, respectivamente.): ");
    
    printf("\na = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);
    
    bool teste = raizes_reais(a, b, c, &x1, &x2);
    
    switch(teste)
    {
        case true:
            printf("As raízes são reais e são: %lf e %lf\n", x1, x2);
            break;
        case false:
            printf("As raízes são complexas\n");
            break;
    }
    return 0;
}