#include <stdio.h>
#include <stdlib.h>

#define limpa system("cls"); 

void mudar(int *a, int *b){
    int aux = *a;
    *a=*b;
    *b=aux;
}

int main () {

    limpa
    int v1=10, v2 = 20;

    printf("Valores: %d; %d", v1, v2);
    mudar(&v1, &v2);
    printf("\nValores: %d; %d", v1, v2);
}



/*como se alloca memoria emm c, como se libera memoria em c
qual a relacao entre ponteiro e vetor
como gerar numeros aleatorios em c



// limpa

//     // ponteiro livre
//     // ponteiro constante
//     // ponteiro para uma constante
//     // constante para uma constante

//     int x=10, y=30;
//     int  const* p1 = &x;

//     p1 = &y;
//     *p1 = 80;
    
//     printf("endereco x: %p\n", &x);
//     printf("valor x: %d\n", x);
//     printf("endereco y: %p\n", &x);
//     printf("valor y: %d\n", y);

//     printf("\nendereco p1= %p", &p1);
//     printf("\nValor apontado por p1= %p", *p1);
*/




#include <stdio.h>
#include <stdlib.h>
#define limpa system("cls");


void criarConjunto(int tam, tconj *const teste ){
    if(tam>0){
        *teste.array = malloc(sizeof(int)*tam);
    }
    else{
        return 0;
    }
}



typedef struct {
    int tamanho;
    int *array;
}tconj;




int main () {
    limpa
   
    printf("Entre com o tamanho do conjunto\n> ");
    int tam;   scanf("%d", &tam);
    tconj teste;
    criarConjunto(tam, &teste);

   

}