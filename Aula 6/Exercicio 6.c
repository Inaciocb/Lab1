#include <stdio.h>

int main()
{
    
    float nota1, nota2;
    
    printf("Digite as notas do aluno: \nNota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    float media= (nota1+nota2)/2;
    
    if(media>=7 && media<=10 && media >=0)
    {
        printf("Aprovado.");
    }else if (media<7 && media >=0)
    {
        printf("Digite a nota que o aluno obteve no exame: ");
        float exame, mediafinal;
        scanf("%f", &exame);
        mediafinal = (exame+media)/2;
       
       if(mediafinal>=5 && mediafinal<=10)
       {
           printf("Aprovado.");
           
       }else if(mediafinal<10 && mediafinal>=0)
        {
           printf("Reprovado.");
        }else
        {
            printf("Digite valores entre 0 e 10.");
        }
    }else
     {
         printf("Digite valores entre 0 e 10.");
     }
    return 0;
}
