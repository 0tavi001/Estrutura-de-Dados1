#include <stdio.h>
 
int main() {
    char pinto[3];
    int di, hi, mi, segi; 
    int df, hf, mf, segf;
    int totals, durd, durh, durm, durs;
    
    scanf("%s %d ", pinto, &di);
    scanf("%d : %d : %d", &hi, &mi, &segi);

    scanf("%s %d", pinto,  &df);
    scanf("%d : %d : %d", &hf, &mf, &segf);

    int tempois=(di*24*60*60)+(hi*3600)+(mi*60)+segi;
    int tempofs=(df*24*60*60)+(hf*3600)+(mf*60)+segf;

    if(tempois>=tempofs)
    {
        tempofs+=86400;
    }

    totals=abs(tempofs-tempois);

    //separamos os valores em forma de (unidade, dezena, centena e milhar) ou (dia, hora, minuto, segundo)

    durd=totals/(24*60*60);
    durh=(totals%(24*60*60)) / (60*60);
    durm=(totals%(24*60*60)%3600) / 60;
    durs=(totals%(24*60*60)%3600) % 60;
    printf("%d dia(s)\n", durd);
    printf("%d hora(s)\n", durh);
    printf("%d minuto(s)\n", durm);
    printf("%d segundo(s)\n", durs);
}
