# C 3

-----

    gcc -c main.c       // compilation -> traduction en asambleur
    gcc -c coucou.c     // compilation -> traduction en asambleur
    gcc -o test main.o coucou.o     // linking -> rajoute toute la librerie du c mais il extrait que les fonction util

## Compilaiton

1. preprocessing
   1. inclu les point h dans le code
2. traduction

    #include <...> //systeme
    #include "./../.." //relatif (que l'on crée)

## math

    #include <math.>

    int main(){
        double A;
        A=cos(3,14/7);
        return à;
    }

Par defaul est n'est pas compiler comme les aurtres.

libm.so -> librairie

Poiur l'inclure durant la comilation :

    gcc -o test -lm -lgtk 

    ou on peut aussi :

    gcc -o test -lm -lgtk -L /usr/local/lib -I /usr/local/include

    -L pour librairie

    -I pour les .h

Autre option :

    -Wall

    pour all warning

    -O2 

    opti pour la vitesse

    -O3

    opti pour la memoir

    tout ces dapeaux sont pour le linking

Opti les compilaitons : fichier "Make file"
