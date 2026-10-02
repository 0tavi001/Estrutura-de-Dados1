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


/*
  O QUE A FUNÇÃO FAZ:
    cria um conjunto que armazena dados do tamanho de um Inteiro

  PARAMETROS:
    variavel que guarda um ponteiro que aponta apenas para a struct

  RETORNO:
    Retorna um conjunto vazio
*/
void criarConjunto(int TAM, tconj *const teste){
  teste->tamanho = TAM;
  if(TAM > 0){
    teste->array = malloc(sizeof(int) * TAM);
  }
}




/*
  O QUE A FUNÇÃO FAZ:
    Gera um vetor de string que traduz numersos para caracter e os armazena e retorna um ponteiro para ela

  PARAMETROS:
    ponteiro para vetor de numeros

  RETORNO:
    Retorna um Vetor de caracteres
*/
char** gerarStringConjunto(tconj const*const teste){
  char** V = malloc(sizeof(char*) * teste->tamanho);
  for(int i = 0 ; i < teste->tamanho ; i++){
    V[i] = malloc(sizeof(char) * 5);
    sprintf(V[i], "%d", teste->array[i]);
  }
  return V;
}




/*
  O QUE A FUNÇÃO FAZ:
    Insere dentro do vetor *array, (da struc Tconj), numeros aleatorios (Atraves da função rand)   

  PARAMETROS:
    vetor da struct Tconj 

  RETORNO:
    Retorna um conjunto vazio 
*/
void inserirAleatorio(tconj *const teste){
  for(int i = 0 ; i < teste->tamanho ; i++){
    teste->array[i] = (rand() % 1000
  );
  }
}




/*
  O QUE A FUNÇÃO FAZ:
    Busca no vetor pelo valor "busca"

  PARAMETROS:
    conjunto da struct Tconj, Valor a ser buscaso

  RETORNO:
    Retorna a posição do valor buscado ou -1 caso não  o encontre 
*/
int buscarConjunto(tconj const*const teste, int busca){
  for(int i = 0 ; i < teste->tamanho ; i++){
    if(busca == teste->array[i]){
      return i;
    }
  }
  return -1;
}




/*
  O QUE A FUNÇÃO FAZ:
    Ordena um conjunto recebido usando o algoritmo Bubble Sort.

  PARAMETROS:
    Ponteiro para o conjunto a ser ordenado.

  RETORNO:
    Não retorna valor, modifica o conjunto passado por referência.
*/
void bubbleSort(tconj *const conjunto) {
  int temp;
  for(int i = 0; i < conjunto->tamanho - 1; i++){
    for(int j = 0; j < conjunto->tamanho - i - 1; j++){
      if(conjunto->array[j] > conjunto->array[j + 1]){
        temp = conjunto->array[j];
        conjunto->array[j] = conjunto->array[j + 1];
        conjunto->array[j + 1] = temp;
      }
    }
  }
}




/*
  O QUE A FUNÇÃO FAZ:
    Abre o vetor para leitura 

  PARAMETROS:
    o vetor 

  RETORNO:
    não retorna valor  
*/
void lerConjunto(tconj *teste){
  limpa
  printf(C_VRD"Entre com os valores do vetor\n\n"RESE_C);
  for(int i=0 ; i<teste->tamanho ;  i++){
    printf("Valor %d: ",i+1);
    scanf("%d", &teste->array[i]);
  }
}



/*
  O QUE A FUNÇÃO FAZ:
    Imprime na tela as posições e os valores do conjunto

  PARAMETROS:
    vetor a ser mostrado

  RETORNO:
    nâo retorna valor
*/
void imprimirConjunto(tconj const*const teste, char** vetc) {
  printf(C_ROX"------------- Seu Conjunto -------------\n\n"RESE_C);
  printf(C_AMA"Conjunto "RESE_C"{");
  for(int i = 0; i < teste->tamanho; i++){
    printf("%s, ", vetc[i]);
  }
  printf("}\n");
  printf(C_ROX"\n----------------------------------------\n\n"RESE_C);  
}




/*
  O QUE A FUNÇÃO FAZ:
    Busca recursivamente um valor no vetor usando o algoritmo de Busca Binária.

  PARAMETROS:
    Conjunto da struct Tconj (ordenado), Valor a ser buscado, indice inicial, indice final

  RETORNO:
    Retorna a posição do valor buscado ou -1 caso não o encontre 
*/
int buscaBinaria(tconj const*const teste, int busca, int ini, int fim){
  if(ini > fim) 
    return -1; 
      
  int meio = ini + (fim - ini) / 2; 

  if(teste->array[meio] == busca) 
    return meio;

  if(busca < teste->array[meio]) 
    return buscaBinaria(teste, busca, ini, meio - 1);

  return buscaBinaria(teste, busca, meio + 1, fim);
}


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
int buscaBinariaIterativa(tconj const*const teste, int busca, int ini, int fim) {
  while(ini <= fim){
    int meio = ini + (fim - ini) / 2;

    if(teste->array[meio] == busca) {
      return meio;
    }

    if(busca < teste->array[meio]) {
      fim = meio - 1;
    }
    else{
      ini = meio + 1;
    }
}
  return -1;
}