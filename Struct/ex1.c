#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    char nome[50];
    int matricula;
    float IRA;
}Aluno;

void imprimi( int quant_aluno, Aluno *v_aluno){
    int i;

    for (i = 0; i < quant_aluno; i++)
    {
        printf("nome do aluno %s\n", v_aluno[i].nome);

        printf("matricula %d\n", v_aluno[i].matricula);

        printf("IRA %f\n", v_aluno[i].IRA);
    }
};

int main(void){
    int quant_aluno, i;

    printf("Digite a quantidade de alunos\n", &quant_aluno);
    scanf(" %d", &quant_aluno);

    Aluno *v_aluno = (Aluno*) malloc(quant_aluno * sizeof(Aluno));

    if (v_aluno == NULL)
    {
        printf("ERRO!");
        exit(1);
    }


    //Sem a função imprimi:

    for (i = 0; i < quant_aluno; i++)
    {
    printf("Digite o nome do aluno\n");
    scanf(" %[^\n]s", v_aluno[i].nome);

    printf("Digite a matricula\n");
    scanf(" %d", &v_aluno[i].matricula);

    printf("Digite o IRA\n");
    scanf(" %f", &v_aluno[i].IRA);
    }
    
    imprimi(quant_aluno, &v_aluno);

    return 0;
}
