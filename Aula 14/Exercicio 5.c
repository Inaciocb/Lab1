/*

A função rand (inclua <stdlib.h>) produz um número inteiro aleatório (na verdade, pseudo-aleatório). 
Pode-se usar ela para se fazer uma função que funciona como um dado (produz um número entre 1 e 6 cada vez que é chamada):

int dado(void) {
  return rand() % 6 + 1;
}

Faça um programa que testa se essa função faz um bom dado, com probabilidades semelhantes de cair cada um dos valores. 
Lance o dado um número alto de vezes (alguns milhares) e imprima quantas vezes caiu cada valor possível. Use um vetor 
de 6 posições para os contadores.

Um valor gerado pela função rand não é verdadeiramente aleatório, ele é gerado à partir do número gerado anteriormente. 
O primeiro valor é gerado a partir de um número inicial chamado semente, que tem sempre o mesmo valor quando um programa 
inicia. Por isso, a cada execução, será gerada a mesma série de números "aleatórios". Para se gerar uma série diferente de
números, deve-se inicializar a semente (tipicamente no início do programa). Uma forma comum de se inicializar o programa 
a cada vez com uma semente diferente e ter números mais parecidos com aleatórios é usar a hora de início do programa como 
semente. Essa hora é obtida com a função time, com argumento 0 (incluir time.h). A chamada para isso é: srand(time(0));.
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
    return maior;
}

int rolarDado(void)
{
    return rand() % 7;
}

int main(void)
{
    int v[6] = {0, 0, 0, 0, 0, 0};
    srand(time(0) + &v[8]);

    for(int i = 0; i < 150000; i++)
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
    printf("O dado mais repetido foi %d\n", qualMaior(6, v) + 1);
}
