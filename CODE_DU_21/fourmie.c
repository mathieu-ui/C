
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void affiche(int*,int);
void trie(int*,int);
void remplir(int*,int);

void s_sleep(int seconds) {
    time_t start_time = 0;
    time_t current_time = 0;
    start_time = time(NULL);
    while(current_time-start_time+1 <= seconds) {
        current_time = time(NULL);
    }
}

int main()
{
    int o = 60;
    int tabg[o][o];
    int tab[o];

    int i;
    for ( i = 0; i < o; i++)
    {
        remplir(tabg[i],o);
        s_sleep(1);
    }

    for ( i = 0; i < o; i++)
    {
        affiche(tabg[i],o);
        
    }

    return 0;
}

void remplir(int* T,int n){
    int i;
    srand(time(NULL));
    for ( i = 0; i < n; i++)
    {
        T[i] = rand()%21;

    }
}


void affiche(int* T, int q){
    int i;
    for ( i = 0; i < q; i++){
        printf("%d|",T[i]);
    }
    printf("\n");
}

void trie(int* T ,int l){
    int z=0;
    int i;
    int j;

    for (i = 0; i < l; i++)
    {
        z=0 ;
        for (j = 0; j < l-i-1; j++)
        {
            if (T[j] > T[j+1])
            {
                int x = T[j];
                T[j] = T[j+1];
                T[j+1] = x;
                z=z+1;
            }
        }
        if (z==0)
        {
            return;
        }
        
     }
}
