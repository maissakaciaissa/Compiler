/****************CREATION DE LA TABLE DES SYMBOLES ******************/
/***Step 1: Definition des structures de données ***/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_val 30

typedef struct cel1 *liste1;
typedef struct cel1
{
    int state;
    char name[max_val];
    char code[max_val];
    char type[max_val];
    char val[max_val];
    liste1 suiv;
} ne1;

typedef struct cel2 *liste2;
typedef struct cel2
{
    int state;
    char name[max_val];
    char type[max_val];
    liste2 suiv;
} ne2;

liste1 creation_noeud1()
{
    liste1 nouv = malloc(sizeof(ne1));
    if (nouv == NULL)
    {
        printf("erreur allocation\n");
        exit(-1);
    }
    return nouv;
}

liste2 creation_noeud2()
{
    liste2 nouv = malloc(sizeof(ne2));
    if (nouv == NULL)
    {
        printf("erreur allocation\n");
        exit(-1);
    }
    return nouv;
}

void ajoute_tete1(liste1 *t1, int state, char val[], char name[], char code[], char type[])
{
    liste1 p = creation_noeud1();
    p->state = state;
    strcpy(p->name, name);
    strcpy(p->code, code);
    strcpy(p->type, type);
    strcpy(p->val, val);
    p->suiv = *t1;
    *t1 = p;
}

void ajoute_tete2(liste2 *t1, int state, char name[], char type[])
{
    liste2 p = creation_noeud2();
    p->state = state;
    strcpy(p->name, name);
    strcpy(p->type, type);
    p->suiv = *t1;
    *t1 = p;
}

void ajout_millieu1(liste1 *prec, int state, char val[], char name[], char code[], char type[])
{
    liste1 nouv = creation_noeud1();
    nouv->state = state;
    strcpy(nouv->name, name);
    strcpy(nouv->code, code);
    strcpy(nouv->type, type);
    strcpy(nouv->val, val);
    nouv->suiv = (*prec)->suiv;
    (*prec)->suiv = nouv;
    (*prec) = nouv;
}
void ajout_millieu2(liste2 *prec, int state, char name[], char type[])
{
    liste2 nouv = creation_noeud2();
    nouv->state = state;
    strcpy(nouv->name, name);
    strcpy(nouv->type, type);
    nouv->suiv = (*prec)->suiv;
    (*prec)->suiv = nouv;
    (*prec) = nouv;
}
////////////////////////////////////////////PILE//////////////////////////////////////////////////////////

typedef struct cell3 *pile;
typedef struct cell3
{
    char info[max_val];
    pile suiv;
} pi;

pile push(pile *tete, char info[])
{
    pile p = malloc(sizeof(pi));
    if (p == NULL)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    strcpy(p->info, info);
    p->suiv = *tete;
    *tete = p;

    return *tete;
}

char *pop(pile *tete)
{
    if (*tete == NULL)
    {
        printf("Underflow: Cannot pop from an empty stack.\n");
        return NULL;
    }

    pile p = *tete;
    *tete = (*tete)->suiv;

    // Allocate memory for the string to be returned
    char *c = malloc(strlen(p->info) + 1);
    if (c == NULL)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    strcpy(c, p->info);
    free(p);

    return c;
}

int is_empty(pile tete)
{
    return tete == NULL;
}

void afficher_LIFO(pile p)
{
    while (p != NULL)
    {
        printf("%s   ", p->info);
        p = p->suiv;
    }
}

// Function to cast int to string
char *intToString(int num)
{
    // Assuming a reasonably large buffer size
    char buffer[20];

    // Use sprintf to convert int to string
    sprintf(buffer, "%d", num);

    // Allocate memory for the string and copy the buffer
    char *result = malloc(strlen(buffer) + 1);
    strcpy(result, buffer);
    return result;
}

char *floatToString(float num)
{
    // Assuming a reasonably large buffer size
    char buffer[20];

    // Use sprintf to convert float to string
    sprintf(buffer, "%f", num);

    // Allocate memory for the string and copy the buffer
    char *result = malloc(strlen(buffer) + 1);
    strcpy(result, buffer);

    return result;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
extern char sav[20];

liste1 tete_idf;
liste1 prec_idf;
liste2 tete_sep;
liste2 prec_sep;
liste2 tete_mc;
liste2 prec_mc;

pile tete_val;
pile tete_type;
/***Step 2: initialisation de l'état des cases des tables des symbloles***/
/*0: la case est libre    1: la case est occupée*/

void initialisation()
{
    tete_idf = NULL;
    prec_idf = NULL;
    tete_sep = NULL;
    prec_sep = NULL;
    tete_mc = NULL;
    prec_mc = NULL;
    tete_val = NULL;
    tete_val = NULL;
}

/***Step 3: insertion des entititées lexicales dans les tables des symboles ***/

void inserer(char name[], char code[], char type[], char val[], int i, int y)
{
    switch (y)
    {
    case 0: /*insertion dans la table des IDF et CONST*/
        if (tete_idf == NULL)
        {
            ajoute_tete1(&tete_idf, 0, val, name, code, type);
            prec_idf = tete_idf;
        }
        else
            ajout_millieu1(&prec_idf, 0, val, name, code, type);
        break;

    case 1: /*insertion dans la table des mots clés*/
        if (tete_mc == NULL)
        {
            ajoute_tete2(&tete_mc, 1, name, code);
            prec_mc = tete_mc;
        }
        else
            ajout_millieu2(&prec_mc, 1, name, code);
        break;

    case 2: /*insertion dans la table des séparateurs*/
        if (tete_sep == NULL)
        {
            ajoute_tete2(&tete_sep, 1, name, code);
            prec_sep = tete_sep;
        }
        else
            ajout_millieu2(&prec_sep, 1, name, code);
        break;
    }
}

/***Step 4: La fonction Rechercher permet de verifier  si l'entité existe dèja dans la table des symboles */
void rechercher(char entite[], char code[], char type[], char val[], int y)
{
    int i;
    liste1 rech_idf = tete_idf;
    liste2 rech_sep = tete_sep;
    liste2 rech_mc = tete_mc;
    int found = 0; // Ajout d'une variable pour suivre si l'entité est trouvée

    switch (y)
    {
    case 0:

        while (rech_idf != NULL)
        {
            if (strcmp(entite, rech_idf->name) == 0)
            {
                found = 1;
                break; // Sortir de la boucle dès qu'on trouve l'entité
            }
            rech_idf = rech_idf->suiv;
        }
        break;
    case 1:
        while (rech_mc != NULL)
        {
            if (strcmp(entite, rech_mc->name) == 0)
            {
                found = 1;
                break; // Sortir de la boucle dès qu'on trouve l'entité
            }
            rech_mc = rech_mc->suiv;
        }
        break;
    case 2:
        while (rech_sep != NULL)
        {
            if (strcmp(entite, rech_sep->name) == 0)
            {
                found = 1;
                break; // Sortir de la boucle dès qu'on trouve l'entité
            }
            rech_sep = rech_sep->suiv;
        }
        break;
    }

    if (!found)
    {
        inserer(entite, code, type, val, i, y);
    }
}

/***Step 5 L'affichage du contenue de la table des symboles ***/

void afficher()
{
    liste1 rech_idf = tete_idf;
    liste2 rech_sep = tete_sep;
    liste2 rech_mc = tete_mc;

    printf("/***************Table des symboles IDF*************/\n");
    printf("__________________________________________________________________________\n");
    printf("\t| Nom_Entite |  Code_Entite | Type_Entite | Val_Entite\n");
    printf("__________________________________________________________________________\n");

    while (rech_idf != NULL)
    {
        if (rech_idf->state == 1)
        {
            printf("\t|%10s |%15s | %12s | %12s\n", rech_idf->name, rech_idf->code, rech_idf->type, rech_idf->val);
        }
        rech_idf = rech_idf->suiv;
    }

    printf("\n/***************Table des symboles mots cles*************/\n");

    printf("_____________________________________\n");
    printf("\t| NomEntite |  CodeEntite | \n");
    printf("_____________________________________\n");

    while (rech_mc != NULL)
    {
        if (rech_mc->state == 1)
        {
            printf("\t|%10s |%20s | \n", rech_mc->name, rech_mc->type);
        }
        rech_mc = rech_mc->suiv;
    }

    printf("\n/***************Table des symboles separateurs*************/\n");

    printf("_____________________________________\n");
    printf("\t| NomEntite |  CodeEntite | \n");
    printf("_____________________________________\n");

    while (rech_sep != NULL)
    {
        if (rech_sep->state == 1)
        {
            printf("\t|%10s |%12s | \n", rech_sep->name, rech_sep->type);
        }
        rech_sep = rech_sep->suiv;
    }
}
/*SEMANTIQUE?*/
void add_type(char name[], char type[], int nb_ligne, int Col, char file_name[])
{
    liste1 current = tete_idf;
    while (current != NULL)
    {
        if (strcmp(name, current->name) == 0)
        {
            if (current->state == 0)
            {
                strcpy(current->type, type);
                current->state = 1;
                return;
            }
            else
            {
                printf("File %s| Ligne %d | Colonne %d| Erreur semantique: double declaration \n", file_name, nb_ligne, Col);
                return;
            }
        }
        current = current->suiv;
    }
    printf("File %s| Ligne %d | Colonne %d| Erreur semantique: entite non existante\n", file_name, nb_ligne, Col);
}

void add_value(char name[], char val[], int nb_ligne, int Col, char file_name[])
{
    liste1 current = tete_idf;
    while (current != NULL)
    {
        if (strcmp(name, current->name) == 0)
        {
            if (current->state == 1)
            {
                strcpy(current->val, val);
                return;
            }
            else
            {
                printf("File %s| Ligne %d | Colonne %d | Erreur semantique: entité non declaré\n", file_name, nb_ligne, Col);
                return;
            }
        }
        current = current->suiv;
    }
    printf("File %s| Ligne %d | Colonne %d| Erreur semantique: entite %s non existante\n", file_name, nb_ligne, Col);
}

void pushing(char info[])
{
    push(&tete_type, info);
    pile tete_cpy = tete_type;
    printf("rani hna\n");
    afficher_LIFO(tete_cpy);
}

void div_zero_cst(int cst, int nb_ligne, int Col, char file_name[])
{
    if (cst == 0)
        printf("File %s| Ligne %d | Colonne %d| Erreur semantique: erreur division sur zero\n", file_name, nb_ligne, Col);
}

void div_zero_idf(char name[], int nb_ligne, int Col, char file_name[])
{
    liste1 current = tete_idf;
    while (current != NULL)
    {
        if (strcmp(name, current->name) == 0)
        {
            if (current->state == 1)
            {
                if (strcmp("0", current->val) == 0 || strcmp("0.0", current->val) == 0)
                {
                    printf("File %s| Ligne %d | Colonne %d| Erreur semantique: erreur division sur zero\n", file_name, nb_ligne, Col);
                    exit(-1);
                }
            }
            else
            {
                printf("File %s| Ligne %d | Colonne %d| Erreur semantique: entité non declaré\n", file_name, nb_ligne, Col);
                exit(-1);
            }
        }
        current = current->suiv;
    }
    printf("File %s| Ligne %d | Colonne %d| Erreur semantique: entite non existante\n", file_name, nb_ligne, Col);
    exit(-1);
}

void comp_type(char name[], char type[], int nb_ligne, int Col, char file_name[])
{
    liste1 current = tete_idf;
    while (current != NULL)
    {
        if (strcmp(name, current->name) == 0)
        {
            if (current->state == 1)
            {
                if (strcmp(type, "INTREAL") == 0)
                {
                    if (strcmp(current->type, "INTEGER") != 0 && strcmp(current->type, "REAL") != 0)
                    {
                        printf("File %s| Ligne %d | Colonne %d| Erreur semantique: not compatible types\n", file_name, nb_ligne, Col);
                        return;
                    }
                }
                else if (strcmp(current->type, type) != 0)
                {
                    printf("File %s| Ligne %d | Colonne %d| Erreur semantique: not compatible types\n", file_name, nb_ligne, Col);
                    return;
                }
                return;
            }
            else
            {
                printf("File %s| Ligne %d | Colonne %d| Erreur semantique: entité non declaré\n", file_name, nb_ligne, Col);
                return;
            }
        }
        current = current->suiv;
    }
    printf("File %s| Ligne %d | Colonne %d| Erreur semantique: entite non existante\n", file_name, nb_ligne, Col);
}

void search_value(char name[], float *val, int nb_ligne, int Col, char file_name[])
{
    liste1 current = tete_idf;
    while (current != NULL)
    {
        if (strcmp(name, current->name) == 0)
        {
            if (current->state == 1)
            {
                if (strcmp(current->val, "") != 0)
                {
                    *val = atof(current->val);
                    return;
                }
                else
                {
                    printf("File %s| Ligne %d | Colonne %d| Erreur semantique: entite %s non value initialised\n", file_name, nb_ligne, Col);
                    return;
                }
            }

            else
            {
                printf("File %s| Ligne %d | Colonne %d| Erreur semantique: entité non declaré\n", file_name, nb_ligne, Col);
                return;
            }
        }
        current = current->suiv;
    }
    printf("File %s| Ligne %d | Colonne %d| Erreur semantique: entite %s non existante\n", file_name, nb_ligne, Col);
}
