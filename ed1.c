#include <stdio.h>
#define limpa   system("cls"); 


int main () {
    limpa

    // ponteiro livre
    // ponteiro constante
    // ponteiro para uma constante
    // constante para uma constante

    int x=10, y=30;
    int  *const p1 = &x;

    p1 = &y;

    *p1 = 80;
    
    printf("endereco x: %p\n", &x);
    printf("valor x: %d\n", x);
    printf("endereco y: %p\n", &x);
    printf("valor y: %d\n", y);

    printf("\nendereco p1= %p", &p1);
    printf("\nValor apontado por p1= %p", *p1);
}


// limpa

// int x = 10;
// printf("Endereco de x: %p\n", &x);

// int *p1 = &x;
// printf("Endereco de x em P1: %p\n", &p1);
// printf("conteudo de p1: %p", p1);

// printf("valor de x : %d\n", x);
// printf("valor de x via p1: %d\n", *p1);

// *p1 = 50;
// printf("valor de x alterado por p1: %d\n", x);






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




// #include <stdio.h>
// #include <stdlib.h>

// #define limpa system("cls"); 

// void mudar(int *a, int *b){
//     int aux = *a;
//     *a=*b;
//     *b=aux;
// }

// int main () {

//     limpa
//     int v1=10, v2 = 20;

//     printf("Valores: %d; %d", v1, v2);
//     mudar(&v1, &v2);
//     printf("\nValores: %d; %d", v1, v2);
// }
