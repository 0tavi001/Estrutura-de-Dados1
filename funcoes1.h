#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define limpa system("cls");
#define C_VM "\033[31m"
#define C_VRD    "\033[32m"
#define C_AZ     "\033[34m"
#define RESE_C  "\033[0m"

typedef struct {
    int tamanho;
    int *array;
}tconj;



/*
  O QUE A FUNÇÃO FAZ:
    cria um conjunto que armazena dados do tamanho de um Inteiro

  PARAMETROS:
    Tamanho, variavel que guarda um ponteiro que aponta apenas para a struct

  RETORNO:
    Retorna um conjunto vazio
*/
void criarConjunto(int TAM, tconj *const teste);
    



/*
  O QUE A FUNÇÃO FAZ:
    Gera um vetor de string que traduz numersos para caracter e os armazena e retorna um ponteiro para ela

  PARAMETROS:
    Tamanho da string, ponteiro para vetor de numeros

  RETORNO:
    Retorna um Vetor de caracteres
*/
char** gerarStringConjunto(tconj const*const teste);




/*
  O QUE A FUNÇÃO FAZ:
    Insere dentro do vetor *array, (da struc Tconj), numeros aleatorios (Atraves da função rand)   

  PARAMETROS:
    Tamanho do conjunto, vetor da struct Tconj 

  RETORNO:
    Retorna um conjunto vazio 
*/
void inserirAleatorio(tconj *const teste);




/*
  O QUE A FUNÇÃO FAZ:
    Busca no vetor pelo valor "busca"

  PARAMETROS:
    Tamanho do conjunto, conjunto da struct Tconj, Valor a ser buscaso

  RETORNO:
    Retorna a posição do valor buscado ou -1 caso não  o encontre 
*/
int buscarConjunto(tconj const*const teste, int busca);



/*
  O QUE A FUNÇÃO FAZ:
    Ordena um conjunto recebido usando o algoritmo Bubble Sort.

  PARAMETROS:
    Ponteiro para o conjunto a ser ordenado.

  RETORNO:
    Não retorna valor, modifica o conjunto passado por referência.
*/
void bubbleSort(tconj *const conjunto);




/*
  O QUE A FUNÇÃO FAZ:
    Abre o vetor para leitura 

  PARAMETROS:
    Tamanho do vetor, o vetor 

  RETORNO:
    não retorna valor  
*/
void lerConjunto(tconj *teste);




/*
  O QUE A FUNÇÃO FAZ:
    Imprime na tela as posições e os valores do conjunto

  PARAMETROS:
    Tamanho do vetor, vetor a ser mostrado

  RETORNO:
    nâo retorna valor
*/
void imprimirConjunto(tconj const*const teste, char **vetc);




/*
  O QUE A FUNÇÃO FAZ:
    Busca recursivamente um valor no vetor usando o algoritmo de Busca Binária.
    (O VETOR PRECISA ESTAR ORDENADO)

  PARAMETROS:
    Conjunto da struct Tconj (ordenado), Valor a ser buscado, indice inicial, indice final

  RETORNO:
    Retorna a posição do valor buscado ou -1 caso não o encontre 
*/
int buscaBinaria(tconj const*const teste, int busca, int ini, int fim);



/*
  O QUE A FUNÇÃO FAZ:
    Busca um valor no vetor ordenado usando o algoritmo de Busca Binária.

  PARAMETROS:
    teste: Ponteiro para a struct tconj que contém o vetor (deve estar ordenado)
    busca: Valor inteiro a ser buscado
    ini: indice inicial da janela de busca
    fim: indice final da janela de busca

  RETORNO:
    Retorna a posição (índice) do valor buscado ou -1 caso não o encontre
*/
int buscaBinariaIterativa(tconj const*const teste, int busca, int ini, int fim);