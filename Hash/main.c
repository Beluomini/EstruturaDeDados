/*
Autor: Lucas Beluomini
Endereçamento Hash
Funções: 
*/
#include "tools.c"

int main(){
    char palavra[20];
    char palavraHash[20];
    int opcao = 0;

    do{
        printf("\nPrograma de alocacao Hash --------------------");
        printf("\n0 - Sair");
        printf("\n1 - aaaaa");
        printf("\n2 - bbbbb");
        printf("\nOpcao --> ");

        scanf("%d", &opcao);
        switch (opcao){
        case 1:
            printf("\nEscolheu a opcao 1");
            break;
        
        default:
            printf("\nOpcao invalida escolha outro valor\n");
            break;
        }

    }while(opcao = 0);

    return 0;
}