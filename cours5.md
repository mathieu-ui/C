# C 5

Cous : http://usthb.orgfree.com/info/2eminfo/cours/algo/CoursCtableauxmultidimensionnels.htm#:~:text=Le%20langage%20C%20autorise%20les,d'o%C3%B9%20la%20syntaxe%20char.

tableau statique -> taille connue au demarage

ex :

    int tab[20];
    int damier [10][20];

talbeux dynamiques

    #include <stdlib.h>

    int * T = null;
    T = malloc(20*sizeof(int)); # autre exemple T = malloc((k+50)*sizeof(int));
    T[17] = 42;
    .
    .
    .
    Free(T); ##si on le fait pas on a du memory leak... 

en deux dimention :

    #include <stdlib.h>

    int i;
    int ** tab = null;
    tab = ( int ** )malloc( 3 * sizeof( int * ) );
    for ( i= 0; i < 3 ; i++){
        tab[i] = (int*) malloc( 4 * sizeof(int) );
    }
    # pour detruire :
    for ( i= 0; i < 3 ; i++){
        free(tab[i]);
    }
    free(tab);
    tab=null;

ELF (ou PE sur windows)

    elfe    ####### bss : 10 MB
            ####### MAX-stack
            -------
    data :  #######
            #######
            #######
            -------
    .text : #######
            #######

} = fichier (executable)

OS : (ram)

    kernel      ####### 
                ####### 
                -------
    stack :     #######
                #######
                -------
    mappings :  #######
                -------
    mappings :  #######
                -------
                #######
    Head :      #######
                -------
    bss :       #######
                -------
    .txt        #######
                -------
                #######
                #######

} mapper par la MMU avec des droits

On peut aussi faire des tableau de char :

Exe :

    |H|E|L|L|O|\n|\0| |

Ou \0 est le "nul"

## Les structures :

    struct point_s{
        double x;
        double y; 
        double z;
    };

    struct segment_s{
        struct point depart;
        struct point arriver;
    };

    struct point A;
    struct point B;
    
    .
    .
    .

    A.x = 17;           # -> A [ x: 17 | y: | z: ]
    A.y = 42;           # -> A [ x: 17 | y: 42 | z: ]
    B = &A;             # struct point *
    C = &B;             # strect point **
    (*B).x ou B -> x
    .

## typedef

    typedef struct point_s point_t;
    typedef int* tablo_p;
    .
