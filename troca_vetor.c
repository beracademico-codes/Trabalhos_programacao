#include <stdio.h>
#include <stdlib.h>

void troca_endereco(int *de, int *para);
void mostrar_conteudo(int *p);

int main()
{
    int dado = 10, outro_dado = 100;
    int *ptr = &dado;

    mostrar_conteudo(ptr);
    troca_endereco(&ptr, &outro_dado);
    mostrar_conteudo(ptr);

    return 0;
}

void troca_endereco(int **de, int *para){

    *de = para;

}

void mostrar_conteudo(int *p){

    printf("conteudo apontado: %i", *ponto);

}
