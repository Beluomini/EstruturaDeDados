#include "types.h"

void imprimirStr(char *palavra, int tamanho){
    printf("\n");
    for(int i = 0; i<tamanho; i++){
        printf("%c", palavra[i]);
    }
}

void enderecamentoAberto(char *palavra, char *palavraHash, int tamanho){
    int posicaoHash = 0;

    for(int i = 0; i<tamanho; i++){
        palavraHash[i] = '*';
    }

    for(int i = 0; i<tamanho; i++){
        posicaoHash = (int)palavra[i]%tamanho;
        printf("\n%c - %d ", palavra[i], posicaoHash);
        int aux = 0;
        while(palavraHash[posicaoHash + aux] != '*'){
            printf(" pos+1 ");
            aux++;
            if(posicaoHash + aux >= tamanho){
                aux = i*-1;
            }
        }
        palavraHash[posicaoHash + aux] = palavra[i];
        printf(" coloquei %d - %c", posicaoHash+aux, palavraHash[posicaoHash + aux]);
    }
};