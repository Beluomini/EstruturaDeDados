# include <stdio.h>
# include <string.h>
# include "celula.c"

int main (){
    TipoLista list;
    FLVazia(&list);
    printf("\nCriou lista vazia\n");

    Celula a;
    a.Item.chave = 1;
    strcpy(a.Item.nome, "aab");
    a.Item.idade = 2;
    printf("\nCriou celula a %d %s %d\n", a.Item.chave, a.Item.nome, a.Item.idade);

    Celula b;
    b.Item.chave = 3;
    strcpy(b.Item.nome, "abb");
    b.Item.idade = 4;
    printf("\nCriou celula b %d %s %d\n", b.Item.chave, b.Item.nome, b.Item.idade);
    
    Celula c;
    c.Item.chave = 2;
    strcpy(c.Item.nome, "bbb");
    c.Item.idade = 3;
    printf("\nCriou celula a %d %s %d\n", c.Item.chave, c.Item.nome, c.Item.idade);

    
    InsereChave(a.Item, &list);
    printf("\nInseriu a\n");
    InsereChave(b.Item, &list);
    printf("\nInseriu b\n");
    InsereChave(c.Item, &list);
    printf("\nInseriu c\n");

    Imprime(list);

    printf("\n\nPrograma Finalizado :)\n");

    return 0;
}