#include <stdio.h>
#include <stdlib.h>

char rot13(char c) {
    if (c >= 'a' && c <= 'm') {
        return c + 13;
    } else if (c >= 'n' && c <= 'z') {
        return c - 13;
    } else if (c >= 'A' && c <= 'M') {
        return c + 13;
    } else if (c >= 'N' && c <= 'Z') {
        return c - 13;
    } else {
        return c;
    }
}

void coder(char *chaine) {
    for(int i =0; i < *chaine; i++) {
        printf("%c", chaine[i]);
    }
}

void coder_dans_fichier(char *fichier_source, char *fichier_cible) {
    FILE *fichier_source_ptr = fopen(fichier_source, "r");
    FILE *fichier_cible_ptr = fopen(fichier_cible, "w");

    char c;
    while((c = fgetc(fichier_source_ptr)) != EOF) {
        fputc(rot13(c), fichier_cible_ptr);
    }

    fclose(fichier_source_ptr);
    fclose(fichier_cible_ptr);
}

int est_sans_repetition(int tab[], int taille) {
    for(int i=0; i<taille-1; i++) {
        if(tab[i] == tab[i+1]) {
            return 0;
        } else {
            return 1;
        }
    }
}

int longueur_repetition(int tab[], int taille) {
    int temp;
    int resultat = 0;
    for(int i=0; i<taille-1;i++) {
        if(tab[i] == tab[i+1]) {
            temp++;
            if(resultat < temp) {
                resultat = temp;
            }
        } else {
            temp = 1;
        }
    }
    return resultat;
}

void sans_repetition(int tab[], int resultat[], int taille[], int *ptr_taille_resultat) {
    int cpt = 0;
    for(int i =0; i < taille-1; i++) {
        if(tab[i] == tab[i+1]) {
            cpt++;
        } else {
            cpt = 0;
        }
    }
    *ptr_taille_resultat = cpt;
    for(int i=0; i < taille; i++) {
        resultat[i] = tab[i];
    }
}

void elimine_repetitions(int tab[], int *ptr_taille) {
    int cpt = 0;
    for(int i=0; i < *ptr_taille; i++) {
        if(tab[i] == tab[i+1]) {
            cpt ++;
        } else {
            cpt = 0;
        }
    }
    *ptr_taille = *ptr_taille - cpt;
}

int main() {
    char *c = "Bonjour";
    coder(c);
}