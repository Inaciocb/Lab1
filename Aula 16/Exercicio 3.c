#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i = 0;

int jogada_valida(int linhaJogada, int colunaJogada, int *colunaJogavel)
{
    int linhaJogavel;
    do
    {
        linhaJogavel = rand() % 4;
        *colunaJogavel = rand() % 4;
    }while (linhaJogavel == linhaJogada || colunaJogada == *colunaJogavel);
    return linhaJogavel;
}

int main()
{
    srand(time(NULL));
    int linhaJogada, colunaJogada, linhaJogavel, colunaJogavel;
    
    printf("Jogue uma linha: ");
    scanf("%d", &linhaJogada);
    printf("Jogue uma coluna: ");
    scanf("%d", &colunaJogada);
    
    linhaJogavel = jogada_valida(linhaJogada, colunaJogada, &colunaJogavel);

    printf("Jogada possível: linha %d coluna %d\n", linhaJogavel, colunaJogavel);
    
    return 0;
}