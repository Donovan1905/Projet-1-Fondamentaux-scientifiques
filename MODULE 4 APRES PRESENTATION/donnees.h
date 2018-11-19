#ifndef DONNEES_H
#define DONNEES_H

typedef struct Ligne {
    int pouls;
    int temps;
} Ligne;

void lectureFichier();

int compteLigne();

#endif