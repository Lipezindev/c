#include <stdio.h>

int main()
{
    int i, alu1;
    int apro = 0;
    int repro = 0;
    int recu = 0;

    for (i = 1; i < 10; i++)
    {
        printf("\ndigite a nota do %do aluno: ", i);
        scanf("%d", &alu1);
        if (alu1 >= 7)
        {
            printf("\nAprovado");
            apro++;
        }else if (alu1 >= 5 && alu1 < 7)
        {
            printf("\nRecuperacao");
            recu++;
        }
                else
        {
            printf("\nReprovado");
            repro++;
        }
}

        printf("\nTotal de alunos aprovados: %d", apro);
        printf("\nTotal de alunos de recuperacao: %d", recu);
        printf("\nTotal de aluno reprovados: %d", repro);
 
    
  
    return 0;
}