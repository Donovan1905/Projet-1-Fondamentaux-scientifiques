#include "actions.h"
#include <stdio.h>
#include "donnees.h"
#include <stdlib.h>


void tri(int n, Ligne *a, Ligne *b){//fonction de tri à bulle
    b[100];
    for(int i = 0; i < n; i++){
        b[i].pouls = a[i].pouls;
        b[i].temps = a[i].temps;
    }
    if(n==0){
        return;
    } 
    int i;
    int tempo;
    for(i=0; i<n; i++){
        if(b[i].pouls>b[i+1].pouls){
            tempo = b[i].pouls;
            b[i].pouls = b[i+1].pouls;
            b[i+1].pouls = tempo;
        }
    }
    tri (n-1, a, b);
    return;
}

int rechercheMax(int n, Ligne *resultat){//recherche du pouls maximum 
    int max;
    for(int i = 1; i < n; i++){
        if(resultat[i].pouls > resultat[i+1].pouls){
            max = resultat[i].pouls;
        }else{
            max = resultat[i+1].pouls;
        }
    }
    return max;
}

void afficherResultat(Ligne *resultat){
    for(int j = 0; j < 24; j++){ //affichage du tableau de structure
        printf("valeur numero : %d\n", j);
        printf("pouls : %d\n", resultat[j].pouls);
        printf("temps : %d\n", resultat[j].temps);       
    }
}



