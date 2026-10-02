#include <bits/stdc++.h>
using namespace std;

int main () {
    string jogador1, jogador2, escolha1, escolha2;
    int partidas, n1, n2, soma;

    cin >> partidas;
    for(int i=0 ; i<partidas ; i++){
        cin >> jogador1 >> escolha1 >> jogador2 >> escolha2;
        cin >> n1 >> n2;
        soma=n1+n2;
        if( ((soma%2==0) && escolha1=="PAR") || ((soma%2!=0) && escolha1=="IMPAR"))
        {//caso o jogador 1 ganhe
            cout << jogador1 << "\n";
        }
        else
        {//caso o jgador2 ganhe
            cout << jogador2 << "\n";
        }
    }
} 