/*
Altere o programa anterior para informar qual o número que ocorreu mais vezes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int quantasVezes(int tam, int vetor[tam], int valor)
{
    int contador = 0;
    for(int i = 0; i< tam; i++)
    {
        if(vetor[i] == valor)
        contador++;
    }
    return contador;
}

int quandoAp(int tam, int vetor[tam], int valor)
{
    int i=0;
    for(i = 0; i < tam; i++)
    {
        if(vetor[i] == valor)
        {
            break;
        }
    }
    return i;
}

int qualMaior(int tam, int vetor[tam])
{
    int maior = vetor[0], i=0;
    for(i = 0; i < tam; i++)
    {
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    return maior;
}

int qualMenor(int tam, int vetor[tam])
{
    int menor = vetor[0], i=0;
    for(i = 0; i < tam; i++)
    {
        if(vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    return menor;
}

int maisrep(int tam, int vetor[tam])
{
    int maisrep = vetor[0];
    
    for(int i = 1; i < tam; i++)
    {
        if(quantasVezes(tam, vetor, vetor[i]) > quantasVezes(tam, vetor, maisrep))
            maisrep = vetor[i];
    }
    return maisrep;
}

int main()
{
    srand(time(0));
    int vetor[100];
    
    for(int i = 0; i < 100; i++)
    {
        vetor[i] = rand() % 100;
    }
    
    
    
    printf(
           
           "Menor: %d, aparece primeiro em vetor[%d], aparece %dx\n"
           "Maior: %d, aparece primeiro em vetor[%d], aparece %dx\n"
           , qualMenor(100, vetor), quandoAp(100, vetor, qualMenor(100, vetor))
           , quantasVezes(100, vetor, qualMenor(100, vetor))
           , qualMaior(100, vetor), quandoAp(100,vetor, qualMaior(100, vetor))
           , quantasVezes(100, vetor, qualMaior(100, vetor))
          
          );


    printf(
            "\nO número que aparece mais vezes é %d(%dx)\n\n", maisrep(100, vetor)
            , quantasVezes(100, vetor, maisrep(100, vetor))
          );     
    return 0;
}