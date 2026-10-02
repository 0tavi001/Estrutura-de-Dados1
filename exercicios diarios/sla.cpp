#include <bits/stdc++.h>
using namespace std; 
int main() 
{
  int N,               // n-esimo valor da sequencia que se encaixa nas condiçoes
  v1=1,                // primeiro valor da sequencia
  v2=2,                // segundo valor da sequencia
  aux,                 // variavel auxiliar para a troca
  s,                   // valor que esta na N-esima posicao
  resultado;
  char numero_str[20];
  
  while(scanf("%d", &N) != EOF)
  {
    for(int i=0 ; i<N ; i++)
    {
      s=v1+v2;
      sprintf(numero_str,"%d",s);
      if(strchr(numero_str,s) == '3')
      {
        resultado=s;
        aux=s;
        v1=v2;
        v2=aux;
      }
    }
    cout << resultado << endl;
  }
}
  // divi= A/10;
  // intdiv= (int)divi;
  // decimal= divi-intdiv;
  // resto= decimal*10;
 
  cout << resto << endl;

  // divi=A/10;
  // partin = (int)divi;
  // resto= (divi-partin)*10;
  //  cout << resto << endl;
  
  /*#include <bits/stdc++.h>
using namespace std; 
int main() 
{
  int multiplos, // é o N-ésimo termo da série de Threebonacci.
      resultado, // é o termo alocado na N_ésima posição
      v1=1, 
      v2=2,
      aux=0;  // auxiliar para trocar v1 pelo v2 e fazer v2 receber aux=v1+v2
  
  
  while( scanf("%d", &multiplos) != EOF)
  {
    for(int i=0 ; i<multiplos ; i++)
    {
      if((v1+v2)%3 == 0)
      {
        resultado=v1+v2;
        aux=v2+v1;
        v1=v2;
        v2=aux;
      }
      else
      {
        if((v1+v2)%3 != 0)
        {
          aux=v2+v1;
          v1=v2;
          v2=aux;
        }
      }
    }
    printf("%d\n", resultado);
  }


}*/
  
}





// int multiplos, // é o N-ésimo termo da série de Threebonacci.
//     resultado, // é o termo alocado na N_ésima posição
//     v1=1, 
//     v2=1,
//     aux=0;  // auxiliar para trocar v1 pelo v2 e fazer v2 receber aux=v1+v2

// while( scanf("%d", &multiplos) != EOF)
// {
//   for(int i=0 ; i<multiplos ; i++)
//   {
//     if((v1+v2)%3 == 0 || (v1+v2)%10 == 3 )
//     {
//       resultado=v1+v2;
//       aux=v2+v1;
//       v1=v2;
//       v2=aux;
//     }
//     else
//     {
//       if((v1+v2)%3 != 0)
//       {
//         aux=v2+v1;
//         v1=v2;
//         v2=aux;
//       }
//     }
//   }
//   printf("%d\n", resultado);
//   v1=1;
//   v2=2;
// }