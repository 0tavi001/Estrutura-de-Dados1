#include "funcoes1.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define limpa system("cls");
#define C_VRD    "\033[32m"
#define C_AZ    "\033[34m"
#define C_AMA  "\033[33m"
#define C_ROX   "\033[35m"
#define RESE_C    "\033[0m"
// pesquisar bubble sort
/*
    digite o tamanho
    gere o conjunto de numeros aleatorios
    transforme os elementos em caracteres
    mostroar o conjunto feito por caracteres
    {
        busque por um elemento 
        mostre se encontrou ou não e onde
    }
    chame o metodo de ordenacao
    mostre o original e o conjunto ordenado( uma copia do original)


    MUDAR ATE A PROXIMA AULA:
     - Adicionar cabecalho no funcoes2.c "feito"
     - colocar const const em funçãoes em que eu não altero nada "feito "
     - arrumar a parte de toda vez eu ter que passar o tamanho "feito"
     - adicionar a função de busca binaria "feito"
     - mudar a função bubble sort "TMNC"
     -

    utilize isso para rodar
    gcc main.c funcoes2.c -o n 
    ./n
*/
int main () {
    srand(time(NULL));
    
    char esc = 's';
    while(esc == 's'){
        limpa

        printf(C_ROX"Entre com o tamanho do conjunto de 1 a 100\n"RESE_C"> ");
        int tam;   scanf("%d", &tam);
        tconj teste;
    
      //crio o conjunto de Numeros aleatoris
        criarConjunto(tam, &teste);

      //insiro os numeros aleatorios
        inserirAleatorio(&teste);

      //transformo os elementos em caracter e insiro em um novo conjunto
        char** vetc = gerarStringConjunto(&teste);

        limpa;
      //mostro o conjunto original
       imprimirConjunto(&teste, vetc);

        printf("Deseja buscar algum valor no conjunto? (s/n)\n> ");
        char esc2;
        scanf(" %c", &esc2);
        while(esc2=='s'){
            limpa
            imprimirConjunto(&teste, vetc);
            printf("Digite o valor a ser buscado\n> ");
            int a; scanf("%d", &a);

          //busco pelo elemento 
           int posi = buscarConjunto(&teste, a);
            limpa
            if(posi>-1){
                printf("Valor Buscado: %d\nValor encontrado na posicao %d\n", a, posi);
            }
            else{
                printf("Valor nao encontrado\n");
            }

            printf("\nDeseja buscar outro valor (s/n)\n> ");
            scanf(" %c", &esc2);
        }

        limpa
        printf(C_ROX"Aqui estao os dois conjuntos\n\n"RESE_C);

        tconj testeOrdenado; 
        criarConjunto(teste.tamanho, &testeOrdenado);
        for(int i = 0; i < teste.tamanho; i++) {
            testeOrdenado.array[i] = teste.array[i];
        }

        bubbleSort(&testeOrdenado);
                
        printf(C_AMA"Conjunto N_Ordenado:"RESE_C" vet{ ");
        for(int i=0 ; i<tam ; i++){
            printf("%d, ", teste.array[i]);
        }
        printf("}\n");

        printf(C_AMA"Conjunto Ordenado:"RESE_C " vet{ ");
        for(int i=0 ; i<tam ; i++){
            printf("%d, ", testeOrdenado.array[i]);
        }
        printf("}\n\n");



        printf("------------- Teste de Busca Binaria -------------\n");
        printf("Deseja buscar algum elemento no conjunto usando Busca Binaria (s/n)\n> ");
        char esc3; scanf(" %c", &esc3);

        while(esc3 == 's') {
            limpa

            printf(C_AMA"Conjunto Ordenado:"RESE_C " vet{ ");
            for(int i = 0 ; i < tam ; i++){
                printf("%d, ", testeOrdenado.array[i]);
            }
            printf("}\n\n");
            printf("Digite o valor a ser buscado\n> ");
            int b; scanf("%d", &b);

            int posBin = buscaBinaria(&testeOrdenado, b, 0, testeOrdenado.tamanho - 1);
            limpa
            if(posBin > -1){
                printf(C_VRD"Valor %d encontrado na posicao %d do vetor ordenado!\n"RESE_C, b, posBin);
            }
            else {
                printf(C_VM"Valor %d nao encontrado.\n"RESE_C, b);
            }

            printf("\nDeseja continuar a Busca Binaria (s/n)\n> ");
            scanf(" %c", &esc3);
        }

        limpa
        //Limpo a memoria
        free(teste.array);
        free(testeOrdenado.array); 
        for(int i = 0; i < tam; i++){
            free(vetc[i]);
        }
        free(vetc);
        
        printf("\nDeseja continuar testando ? (s/n)\n> ");
        scanf(" %c", &esc);
        limpa
    }
    printf(C_VRD"\nFIM DO PROGRAMA ! :)\n"RESE_C);
}

























/*

O Bubble Sort (ou Ordenação por Bolha) é um algoritmo simples que percorre uma lista
 comparando elementos adjacentes (vizinhos lado a lado) e trocando-os de lugar caso estejam fora de ordem. 
 Esse processo se repete até que nenhuma troca seja necessária, o que indica que a lista está completamente ordenada.

O nome "bolha" vem do fato de que os maiores valores "flutuam" gradualmente
 para o final da lista a cada passagem, exatamente como bolhas subindo à superfície.

Passo a Passo na Prática

Considerando a lista desordenada [5, 2, 8, 1]:

1ª Passagem:

Compara 5 e 2: 5>2, troca → [2, 5, 8, 1]

Compara 5 e 8: 5<8, mantém → [2, 5, 8, 1]

Compara 8 e 1: 8>1, troca → [2, 5, 1, 8]
(O maior valor, 8, "flutuou" até a última posição).

2ª Passagem:

Compara 2 e 5: 2<5, mantém → [2, 5, 1, 8]

Compara 5 e 1: 5>1, troca → [2, 1, 5, 8]
(O segundo maior valor, 5, chegou à sua posição correta).

3ª Passagem:

Compara 2 e 1: 2>1, troca → [1, 2, 5, 8]
(A lista agora está totalmente ordenada).

Características Principais

Complexidade de Tempo (Pior/Médio Caso): O(n 
2
 ) — exige comparar praticamente todos os pares repetidamente, tornando-o ineficiente para listas grandes.

Complexidade de Tempo (Melhor Caso): O(n) — ocorre se a lista já estiver ordenada e o algoritmo tiver uma verificação (flag) para interromper a execução assim que notar que nenhuma troca foi feita.

Complexidade de Espaço: O(1) — é um algoritmo in-place, pois ordena a estrutura original sem precisar alocar nova memória para outro vetor.

Estabilidade: É um algoritmo estável, preservando a ordem original de elementos com valores iguais.*/