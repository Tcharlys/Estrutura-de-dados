#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa
{
    char nome[50];
    int num_documento;
    int idade;
}Pessoa;

void preenche_pessoa( Pessoa *v_pessoa){
    printf("Digite o nome da pessoa.\n");
    scanf(" %[^\n]s", v_pessoa->nome);

    printf("\nDigite o numero do documento.\n");
    scanf(" %d", &v_pessoa->num_documento);

    printf("\nDigite o idade da pessoa.\n");
    scanf(" %d", &v_pessoa->idade);
}

void imprimi_pessoa( Pessoa *v_pessoa){
    printf("\n\tExibindo dados recebidos...\n");
    printf("Nome da pessoa.\n %s\n", v_pessoa->nome);

    printf("\nNumero de documento da pessoa\n %d\n", v_pessoa->num_documento);

    printf("\nIdade da pessoa\n %d\n", v_pessoa->idade);
}

void altera_idade_pessoa( Pessoa *v_pessoa){
    printf("\n\tALterando a idade da pessoa...\n");
    scanf(" %d", &v_pessoa->idade);

    printf("\nIdade da pessoa atualizada:\n %d\n", v_pessoa->idade);
}

int main(void){

    Pessoa *v_pessoa = (Pessoa*) malloc(sizeof(Pessoa));

    if (v_pessoa == NULL)
    {
        printf("ERRO!\n");
        exit(1);
    }
    
    preenche_pessoa(v_pessoa);
    imprimi_pessoa(v_pessoa);
    altera_idade_pessoa(v_pessoa);

    free(v_pessoa);
    
    return 0;
}