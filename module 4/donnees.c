#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "donnees.h"



void lectureFichier(Ligne *resultat){
    FILE *fic = fopen("Battements.csv", "r"); //On ouvre le fichier en lecture seule
    int car = 0;

    if(fic == NULL){
        printf("erreur d'ouverture"); // on vérifie si le fichier s'est ouvert sans problème
    }

    int i = 0;

    //Ligne resultat[100]; //on déclare le tableau de structure qui va stocker le pouls et le temps
    
    while(1){

       fscanf(fic, "%d;%d", &resultat[i].pouls, &resultat[i].temps); //fonction qui permet de detecter deux valeur séparée par un point virgule et de les stocker dans le tableau de structure
       i++;
       if(feof(fic)){ //sort de la boucle si la lecture du fichier est finie
           printf("la lecture est terminée");
           break;
       }
    }
}