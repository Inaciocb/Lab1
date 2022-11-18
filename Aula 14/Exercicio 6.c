/*
Altere o programa anterior para calcular e imprimir um "fator de desonestidade" do dado, definido como a diferença entre
o número de vezes que cai o número que cai mais vezes e o número de vezes que cai o número que cai menos vezes dividido
pelo número de lançamentos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int qualMaior(int tamanhoVetor, int vetor[tamanhoVetor])
{
    int maior = 0;
    for(int i = 0; i < tamanhoVetor; i++)
    {
        if(vetor[i] > vetor[maior])
        {
            maior = i;
        }
    }
    return vetor[maior];
}

int qualMenor(int tamanhoVetor, int vetor[tamanhoVetor])
{
    int menor = 0;
    for(int i = 1; i < tamanhoVetor; i++)
    {
        if(vetor[i] < vetor[menor])
        {
            menor = i;
        }
    }
    return vetor[menor];
}

int rolarDado(void)
{
    return rand() % 7;
}

int main(void)
{
    int v[6] = {0, 0, 0, 0, 0, 0}, numeroSorteios;
    srand(time(0));
    printf("Quantas vezes quer sortear o dado?\n--> ");
    scanf("%d", &numeroSorteios);

    for(int i = 0; i < numeroSorteios; i++)
    {
        switch(rolarDado())
        {
            case 1:
                v[0]++; 
                break;
            case 2:
                v[1]++; 
                break;
            case 3:
                v[2]++; 
                break;
            case 4:
                v[3]++; 
                break;
            case 5:
                v[4]++; 
                break;
            case 6:
                v[5]++; 
                break;
        }
    }
    for(int i = 0; i < 6; i++)
    {
        printf("Número de dados \"%d\": %d\n\n", i+1, v[i]);
    }
    printf("O fator de desonestidade do dado foi %f\n", (float)(qualMaior(6, v) - qualMenor(6, v)) / numeroSorteios);
}
