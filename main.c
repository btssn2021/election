#include <stdio.h>
#include <stdbool.h>

/*************************prototypes*************************************/
void menuCloture();
void menu(); //menu scrutin ouvert
void choixCandidat();
void nbvote();
void affichageResultat();
/***********************variables globales*******************************/
float vote1=0,vote2=0,vote3=0,vote4=0;
int nvote=0;
enum {CANDIDAT1=1,CANDIDAT2=2,CANDIDAT3=3,CANDIDAT4=4};
bool scrutin=true; //scrutin ouvert
int main() {
    menuCloture();
}

void menuCloture() {
    int choix=0;
    printf("Menu principal\n");
    printf("1-Consulter les resultats\n");
    printf("2-Afficher le nombre de votes\n");
    scanf("%d",&choix);
    switch (choix)
    {
        case 1:
                affichageResultat();
                break;
        case 2:
            nbvote();
            break;

        default:
            printf("Erreur de saisie\n");
            menuCloture();
    }



}

void affichageResultat() {
    printf("Affichage Résultat\n");
}

void nbvote() {
    printf("Nbvote\n");
}
