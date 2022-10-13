#include <stdio.h>

int main ()
{

  int i = -1;
  float soma = 0;
  float n;
  do
  {
      printf("Digite valores positivos (para cancelar, digite um valor negativo ou '0'): ");
      scanf ("%f", &n);

      if (n > 0)

	{
	  soma += n;
	}

      i++;

  }
  while (i >= 0 && n > 0);

  printf ("A média é %.2f\n", soma / i);
  return 0;
}
