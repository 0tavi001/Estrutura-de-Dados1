#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int a1, a2, a3;

  cin >> a1 >> a2 >> a3;

 
  //caso a maquina esteja no ultimo andar
  if(a3>a1  &&  a3 >= (a1+a2) )
  {
    printf("%d",a1*4 + a2*2);
  }
  else
  {//caso a maquina esteja no primeiro andar
    if(a1>a3 && a1>=a3+a2)
    {
        printf("%d",a3*4 + a2*2);
    }
    else
    {//caso esteja no meio
        printf("%d\n", a1*2 + a3*2);
    } 
  }
}