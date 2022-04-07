# cours 2

## fonctionenemnt de la memoire

    {
        ####
        Kernel -> OS (1G sous linux)
        ####
        Pile -> 
        ####
        ################## s'etend vers le bas
        ####
        Memory maps -> lieux de stockage des librairie
        ####
        ################## s'etend vers le haut
        ####
        Tas (map) -> malloc
        ####
        .bss -> var globales non initilalisée (memo : beter stay safe)
        ####
        .data -> var globales initialisées
        ####
        .txt -> code
        #### 

    } -> toutes la RAM

## Maping

En realiter les process on une memoir virtuelle process (MMU)
-> donc en raliter les process on des adress memoir traduite par la MMU (memory management unit)

Ordonaceur -> interuption de process

SYSCALL -> interuption sur archi PC

## Variable

rapelle : une variable existe que dans sont "bloque"

        int A; #variable globales non initilalisée
        int B=; #variable globales initilalisée
        int main(){
            int C=17;
        }

## LIFO

LIFO -> Last in First Out

-> pile avec les push et pop

FILE first in ....

## Execution

Les execution de fonction marche avec une LIFO ex :

        ...
        #############
        fonct°2
        #############
        fonct°1
        #############
        main
        #############

## ELF (#DWARF)

        .ELF
        bss = 5 MO

executable compreser -> elf

## Size

        size ./...

Montre la taille des diff partie.

## Adresse

        float C;

c -> valeur
&c -> adresse

### Pointeur

        int* a,b,c; 
        # a -> pointeur
        # b -> int
        int *a,*b,*c;
        #la ca marche

Donc :

        int *D &C;
        C = 42;
        #ou
        *D = 42;

## Talbeaux statiques

-> reserver des la compilation

        int tablo[42];
        tablo[16] -> *(tablo+16)

## Talbeaux dynamiques

-> declarer pendant l'execution

        #include <stdlib.h>
        
        malloc(42*sizeof(int));
        // ont le fait comme ça car on ne caonais pas la valeur de la taille de int
        
        int *tablo;
        tablo = (int*) malloc(42*sizeof(int));
        .
        .
        .
        free(tablo); //v si on ne met pas cela cause une fuite memoire

(512o -> page memoire)
quand on demande une zone memoire qui nous est pas atribuer (zone non maper) on a une erreure de type segemetation fault
shellcode -> chaine de cara mais quie est executable