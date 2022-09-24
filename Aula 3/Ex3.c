/*
Exercício número 3 Benhur "Primeiro programa em C"
Enunciado:
 Faça um programa para calcular e imprimir o valor de um litro de suco de laranja. Esse programa deve inicializar uma
 variável com o custo de um quilo de laranja (20), outra com a quantidade de suco, em ml, extraível de um quilo (800),
 outra com o custo da mão de obra mais lucro para produzir um litro de suco (14)
*/

#include <stdio.h>

int main() {

    int kglaranja = 2000;  //usei uma solução alterantiva para a conversão de unidades de medidas, já que só podemos trabalhar com variáveis inteiras
    int quantidadeporkg = 80; // "2000/80 = 20/0.8"
    int customaislucro = 14;
    int valor = kglaranja/quantidadeporkg;
// Não entendi muito bem o significado de "custo mais lucro"? Seria os R$25 necessários para a produção de
// 1L de suco descontados do valor que o comprador paga? No caso: R$39-R$25)?
    printf("O valor de 1L de suco de laranja é de %d", valor + customaislucro);

    return 0;
}
