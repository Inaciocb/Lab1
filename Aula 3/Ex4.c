/*
Exercício número 4 Benhur "Primeiro programa em C"
Enunciado:
 Suponha que o valor de um litro de diesel seja 666 centavos de real, e que um caminhão tem um tanque onde cabem 333
 litros. Faça um programa para calcular o valor necessário para encher o tanque inicialmente vazio. O programa deve
 imprimir o valor separando reais e centavos (por exemplo, "234 reais e 27 centavos"). Dica: pra que serve o resto da
 divisão mesmo?
*/

#include <stdio.h>

int main() {

    int valordiesel = 666; //centavos
    int capacidadetanque = 333; //litros
    int totalvalortanquecent = capacidadetanque*valordiesel;
    int valortanquecent = totalvalortanquecent%100;
    int valortanquereais = totalvalortanquecent/100;

    printf("O valor necessário para o enchimento do tanque é de %d reais e %d centavos", valortanquereais, valortanquecent);

    return 0;
}
