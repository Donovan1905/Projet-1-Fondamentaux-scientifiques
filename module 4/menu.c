#include "menu.h"
#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "menu.h"
#include "donnees.h"
#include "actions.h"

void menu () {
    int choice = 1;
    printf("Bienvenue !\nMenu:\n\n1 - Afficher les données \n2 - Afficher les données en ordre croissant selon le pouls\n3 -  Afficher les données en ordre décroissant selon le pouls\n4 -  Afficher les données en ordre croissant selon le temps\n"
           "5 - Afficher les données en ordre décroissant selon le temps\n6 - Rechercher et afficher les données pour un temps particulier\n 7 - Afficher la moyenne de pouls dans une plage de temps \n");
    printf("8 - Afficher le nombre de lignes actuellement en mémoire\n 9 - Afficher le maximum de pouls\n 10 - afficher le minimum de pouls\n 11- Quitter le programme ");
                //affiche le menu avec les choix
    Ligne resultat[100];
    Ligne croissant[100];
    while (choice != 11) {              //tant que le choix c'est pas 11 alors le menu reste actif
        printf("Que voulez vous faire ? : \t");         //demande à la personne ce qu'elle veut faire
        scanf("%d", &choice);

        switch (){                                //permet de faire les actions demandées selon le cas choisi
            case 1:
                afficherResultat(resultat); //afficher les resultat dans l'ordre de base
                break;

            case 2:  //ordre croissant selon le pouls
                tri(24, resultat, croissant);
                afficherResultat(croissant); //à la place du N il faut mettre le nom du int de donnees demander le nom
                break;

            case 3:
                // ordre décroissant selon le pouls
                printf("la fonction n'existe pas\n");  //à la place du N il faut mettre le nom du int de donnees demander le nom
                break;

            case 4:
                // ordre croissant selon le temps
                afficherResultat(resultat); //à la place du N il faut mettre le nom du int de donnees demander le nom
                printf("\n");
                break;
            case 5:
                // ordre décroissant selon le temps
                printf("la fonction n'existe pas\n");//à la place du N il faut mettre le nom du int de donnees demander le nom
                break;

            case 6:
                //Rechercher et afficher les données pour un temps particulier
                printf("la fonction n'existe pas\n");
                break;

            case 7:
                //Afficher la moyenne de pouls dans une plage de temps
                printf("la fonction n'existe pas\n");
                break;

            case 8:
                //Afficher le nombre de lignes actuellement en mémoire
                printf("la fonction n'existe pas\n");
                break;

            case 9:
                //Afficher le maximum et le minimum de pouls
                int max;
                max = rechercheMax(23, resultat);
                printf("%d\n", max);
                break;
            case 10:
                printf("Au revoir !\n");
                break;
            default:
                printf("Désole, cette opération n'existe pas !\n\n");
        }
    }
}