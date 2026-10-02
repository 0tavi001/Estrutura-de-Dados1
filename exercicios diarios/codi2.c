#include <stdio.h>
 
int main() {
    int t, bonus, level, ata, def;
    int VG1, VG2, level2, ata2, def2; 
    scanf("%d", &t);
    for(int i=0; i<t ; i++)
    {
        scanf("%d", &bonus);/*lemos o valor do ataque, defesa e o level do treinador duas veses*/ 
        scanf("%d %d %d", &ata, &def, &level);
        scanf("%d %d %d", &ata2, &def2, &level2);

        if(    ( (level%2==0 && level2%2!=0) || (level%2!=0 && level2%2==0) )    &&    ( (VG1=((ata+def)/2)+bonus) > (VG2=(ata2+def2)/2) || (VG1=(ata+def)/2) > (VG2=((ata2+def2)/2)+bonus) ) )
        {//caso o daniel ganhe todas
            printf("Dabriel\n");
        }
        else
        {
            if(    ( (level2%2==0 && level%2!=0) || (level2%2!=0 && level%2==0) )     &&    ( (VG2=((ata2+def2)/2)+bonus) > (VG1=(ata+def)/2) || (VG2=(ata2+def2)/2) > (VG1=((ata+def)/2)+bonus) ) )
            {//caso o daniel ganhe todas
                printf("Guarte\n");
            }
            else
            {
                printf("Empate\n");
            }
        }
    }
}