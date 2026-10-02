#include "menu.h"
#include <stdio.h>
#include "aluno.h"
#include <string.h>

#define MAX 50
#define TRUE 1

int main () {
    int opcao, n;
    float resultado;


    printf("Quantos alunos deseja cadastrae ? ");
    scanf("%d", &n);

    Aluno *alunos = (Aluno *)malloc(sizeof(Aluno)*n)
    {
        printf("\nImpossivel continuar...");
        return -1;
    }


    whilw(opcao!=9)
    {
        if(opcao==1)
        {
            resultado = calcularMedia(alunos,n)
        }
        else if (opcao==3)
        {
            printf("maior valor\n")
        }
        else if(opcao==9)
            return 0;
        else
            printf("\nnova opcao\n");
    }


     free(alunos);
    alunos=NULL;
    return 0;
}