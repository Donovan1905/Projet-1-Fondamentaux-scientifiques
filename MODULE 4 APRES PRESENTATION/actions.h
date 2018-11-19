#ifndef ACTIONS_H
#define ACTIONS_H
#include "donnees.h"


int rechercheMax(int n, Ligne *resultat);

int rechercheMin(int n, Ligne *resultat);

void afficherResultat(int n, Ligne *resultat);

void tri(int n, Ligne *a, Ligne *b);

void afficherInverse(int n, Ligne *resultat);

void rechercheTemps(int n, Ligne *resultat);

int moyenneIntervalle(int n, Ligne *resultat);

#endif