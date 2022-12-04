/*
Faça uma função que recebe dois números float e retorna (através de ponteiros), 
o quociente inteiro e o resto da divisão desses dois números. O quociente inteiro
de a/b é o maior inteiro q que satisfaz q*b <= a. O resto r é o que sobra: r = a - q*b (um float). 
Considere que a e b são positivos. Faça um programa para testar sua função.
*/

#include <stdio.h>
#include <math.h>

int quociente_resto(float x, float y, float *z)
{
    int quociente = quociente = x/y;
    *z = x - (quociente * y);
    return quociente;
}

int main()
{
    float resto = 0, x = 11, y = 2;
    int quociente = quociente_resto(x, y , &resto);
    printf("quociente = %d, resto = %f\n", quociente, resto); 
    return 0;
}
