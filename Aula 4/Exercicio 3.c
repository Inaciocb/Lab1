#include <stdio.h>

int main() {

    float custokglaranja, quantidadeporkg, customaislucro;
  
  printf("Informe o valor dos seguintes: \n Custo do kg de laranja: \n");
  scanf("%f", &custokglaranja);
  printf("Informe a quantidade de suco (em ml) extraível de um quilo: \n");
  scanf("%f", &quantidadeporkg);
  printf("Informe o custo mais o lucro: \n");
  scanf("%f", &customaislucro);
  
  quantidadeporkg = quantidadeporkg/1000;
  float valor = custokglaranja/quantidadeporkg;
  
  printf("O valor do suco é: %f", valor+customaislucro);
  
    return 0;
}
