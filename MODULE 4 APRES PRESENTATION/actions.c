#include "actions.h"
#include <stdio.h>
#include "donnees.h"
#include <stdlib.h>


void tri(int n, Ligne *a, Ligne *b){//fonction de tri à bulle
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
            tempo = b[i].temps;
            b[i].temps = b[i+1].temps;
            b[i+1].temps = tempo;
        }
    }
    tri (n-1, a, b);
    return;
}

int rechercheMax(int n, Ligne *resultat){//recherche du pouls maximum 
    int max = resultat[0].pouls;
    for(int i = 1; i < n; i++){
        if(resultat[i].pouls > max){
            max = resultat[i].pouls;
        }
    }
    return max; 
}

int rechercheMin(int n, Ligne *resultat){
    int min = resultat[0].pouls;
    for(int i = 1; i < n; i++){//parcours du tableau à la recherche du minimum
        if(resultat[i].pouls < min){
            min = resultat[i].pouls;
        }
    }
}

void rechercheTemps(int n, Ligne *resultat){
    int t; // déclaration du temps recherché
    printf("\ntemps ? : \n");
    scanf("%d", &t); // on demande le temps auquel l'utilisateur s'intéresse
    for(int i = 0; i < n; i++){// on parcours les données à la recherche du temps demandé
        if(resultat[i].temps == t){
            printf("%d", resultat[i].pouls);
            break;
        }else{
            continue;
        }
    }
}

int moyenneIntervalle(int n, Ligne *resultat){
    int borne_inf, borne_supp, somme, compteur, moyenne; 
    compteur = 0;
    somme = 0;
    printf("\n\nborne inférieure ?\n");//l'utilisateur choisit une borne inférieure et suppérieure
    scanf("%d", &borne_inf);
    printf("\n\nborne suppérieure ?\n");
    scanf("%d", &borne_supp);
    for(int i = 0; i < n; i++){
        if(resultat[i].temps > borne_inf && resultat[i].temps < borne_supp){//on additionne tout les valeurs de pouls pour lesquels le temps correspond à l'intervalle
            somme = somme + resultat[i].pouls;
            compteur++;//on compte le nombre valeur qu'on a additionné (formules de ka moyenne)
        }
    }
    moyenne = somme / compteur;//on calcul le moyenne
    return moyenne;
}

void afficherResultat(int n, Ligne *resultat){
    for(int j = 0; j < n; j++){ //affichage du tableau de structure
        printf("valeur numero : %d\n", j);
        printf("pouls : %d\n", resultat[j].pouls);
        printf("temps : %d\n", resultat[j].temps);       
    }
}

void afficherInverse(int n, Ligne *resultat){
    for(int i = n; i > 0; i--){ // affichage inverse du tableau de structure
        printf("valeur numero : %d\n", i);
        printf("pouls : %d\n", resultat[i].pouls);
        printf("temps : %d\n", resultat[i].temps); 
    }
}


