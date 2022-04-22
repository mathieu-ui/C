
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void affiche(int*,int);
void trie(int*,int);
void remplir(int*,int);

int main()
{
    int o = 30;
    int tab[o];

    remplir(tab,o);
    
    affiche(tab,o);

    trie(tab,o);

    affiche(tab,o);

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
        printf(" %d ",T[i]);
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