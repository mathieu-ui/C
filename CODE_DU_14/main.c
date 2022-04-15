// #include <stdio.h>

// #include "coucou.h"

// extern int A; // externe permet de dire que cette variable est def mais pas dans ce fichier

// int main (){
//     coucou();
//     // printf("Hello you \r\n");
//     return 0;
// }

// #include <math.h> // par defaul est n'est pas compiler comme les aurtres

// int main(){
//     double A;
//     A= cos(3.14/7);
//     return 0;
// }

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int i;
    int j;
    int tab[10];
    int r;
    srand(time(NULL));
    for ( i = 0; i < 10; i++)
    {
        r = rand()%21;
        //printf("%d\n", r);
        tab[i] = r;

    }
    for ( i = 0; i < 10; i++){
        printf(" %d ",tab[i]);
    }

    printf("\n");
    // for ( i = 0; i < ?????; i++){
        
    // }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10-1; j++)
        {
            if (tab[j] > tab[j+1])
            {
                int x = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = x;
            }
            
        }
        
     }
    for ( i = 0; i < 10; i++){
        printf(" %d ",tab[i]);
    }
    printf("\n");
    

    return 0;
}

