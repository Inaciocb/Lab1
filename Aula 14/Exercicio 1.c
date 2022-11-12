#include <stdio.h>

int main()
{
	
  int v[10];
	printf("Digite 10 numeros:\n\n");
	int i = 0;
  
  for(i = 0; i <10 ; i++)
  {
		printf("N%d: ", i + 1);
		scanf("%d", &v[i]);
	}
  
  i--;
  
  printf("Os números digitados em ordem invertida são:\n");

	while(i >= 0)
	{
		printf("%d\n", v[i]);
		i--;
	}

}
