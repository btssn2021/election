#include <stdio.h>
#include <stdbool.h>

/*************************prototypes*************************************/
void menuCloture();
void menu(); //menu scrutin ouvert
void choixCandidat();
void nbvote();
void affichageResultat();
void cloturerScrutin();
/***********************variables globales*******************************/
float vote1=0,vote2=0,vote3=0,vote4=0;
int nvote=0;
enum {CANDIDAT1=1,CANDIDAT2=2,CANDIDAT3=3,CANDIDAT4=4};
bool scrutin=true; //scrutin ouvert
int main() {
   choixCandidat();
    printf("%f %f %f %f",vote1,vote2,vote3,vote4);
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

void menu() {
    int choix=0;
    printf("Menu principal\n");
    printf("1-Voter\n");
    printf("2-Cloturer le scrutin\n");
    scanf("%d",&choix);
    switch (choix)
    {
        case 1:
           choixCandidat();
            break;
        case 2:
            cloturerScrutin();
            break;

        default:
            printf("Erreur de saisie\n");
            menuCloture();
    }
}

void choixCandidat() {
    int choix=0;
    printf("Choix Candidat\n");
    printf("Candidat %d\n",CANDIDAT1);
    printf("Candidat %d\n",CANDIDAT2);
    printf("Candidat %d\n",CANDIDAT3);
    printf("Candidat %d\n",CANDIDAT4);
    printf("Votre choix?");
    scanf("%d",&choix);
    switch (choix) {
        case 1:
            vote1++;
            break;
        case 2:
            vote2++;
            break;
        case 3:
            vote3++;
            break;
        case 4:
            vote4++;
            break;

    }

}

void cloturerScrutin() {
    printf("Cloturer Scrutin");
}
