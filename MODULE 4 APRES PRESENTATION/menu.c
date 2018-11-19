#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "menu.h"
#include "donnees.h"
#include "actions.h"

void menu () {
    int choice = 1;
    Ligne resultat[100];
    Ligne croissant[100];
    int max, min, moyenne;
    int nb_Lignes;    
    nb_Lignes = compteLigne();
    lectureFichier(resultat);
    for(int i = 0; i < nb_Lignes; i++){
        croissant[i].pouls = resultat[i].pouls;
        croissant[i].temps = resultat[i].temps;
    }
    printf("Bienvenue !\n");
    while (choice != 11) {   
        printf("\n\n\nMenu:\n\n1 - Afficher les données \n2 - Afficher les données en ordre croissant selon le pouls\n3 -  Afficher les données en ordre décroissant selon le pouls\n4 -  Afficher les données en ordre croissant selon le temps\n"
           "5 - Afficher les données en ordre décroissant selon le temps\n6 - Rechercher et afficher les données pour un temps particulier\n 7 - Afficher la moyenne de pouls dans une plage de temps \n");
        printf("8 - Afficher le nombre de lignes actuellement en mémoire\n 9 - Afficher le maximum de pouls\n 10 - afficher le minimum de pouls\n 11- Quitter le programme \n\n\n");
               //tant que le choix c'est pas 11 alors le menu reste actif
        printf("Que voulez vous faire ? : \n");         //demande à la personne ce qu'elle veut faire
        scanf("%d", &choice);
        switch (choice){                                //permet de faire les actions demandées selon le cas choisi
            case 1:
                afficherResultat(nb_Lignes, resultat); //afficher les resultat dans l'ordre de base
                break;

            case 2:  //ordre croissant selon le pouls
                tri(nb_Lignes, resultat, croissant);
                afficherResultat(nb_Lignes, croissant); 
                break;

            case 3:
                // ordre décroissant selon le pouls
                afficherInverse(nb_Lignes, croissant);//pas fonctionelle
                break;

            case 4:
                // ordre croissant selon le temps
                afficherResultat(nb_Lignes, resultat);
                printf("\n");
                break;

            case 5:
                // ordre décroissant selon le temps
                afficherInverse(nb_Lignes, resultat);
                break;

            case 6:
                //Rechercher et afficher les données pour un temps particulier
                rechercheTemps(nb_Lignes, resultat);
                break;

            case 7:
                //Afficher la moyenne de pouls dans une plage de temps
                moyenne = moyenneIntervalle(nb_Lignes, resultat);
                printf("%d", moyenne);
                break;

            case 8:
                //Afficher le nombre de lignes actuellement en mémoire               
                nb_Lignes = compteLigne();
                printf("\n\nIl y a actuellement %d lignes en mémoire\n\n", nb_Lignes);
                break;

            case 9:
                //Afficher le maximum et le minimum de pouls
                max = rechercheMax(nb_Lignes, resultat);
                printf("%d\n", max);
                break;
            case 10:
                //minimum
                min = rechercheMin(nb_Lignes, resultat);
                printf("\n%d\n", min);
                break;
                
            case 11:
                exit(0);
            default:
                printf("Désole, cette opération n'existe pas !\n\n");
        }
    }
}