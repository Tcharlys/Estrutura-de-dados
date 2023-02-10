#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa
{
    char nome[50];
    int num_documento;
    int idade;
}Pessoa;

void preenche( Pessoa *v_pessoa){
    printf("Digite o nome da pessoa.\n");
    scanf(" %[^\n]s", v_pessoa->nome);

    printf("Digite o numero do documento.\n");
    scanf("%d", &v_pessoa->num_documento);

    printf("Digite o idade da pessoa.\n");
    scanf("%d", &v_pessoa->idade);
}

int main(void){

    Pessoa *v_pessoa = (Pessoa*)malloc(sizeof(Pessoa));

    preenche(v_pessoa);

    free(v_pessoa);

    return 0;
}