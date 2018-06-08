#include <stdio.h>
#include <stdlib.h>
/*
Source :
Langage C #11 - pointeurs https://www.youtube.com/watch?v=Qra-0U_jEKs
FormationVidéo : https://www.youtube.com/channel/UCS2e0hEJMhwd6bNscS60xTg
*/
/*
On peut manipuler une valeur par le nom de sa variable ou son adresse mémoire.
Pointeurs : variable qui est l'adresse d'une variable.
%p : affiche une adresse de variable, ou pointeur.

[VARIABLES]
    maVariable : valeur de la variable.
    &maVariable : adresse de la variable.

[POINTEURS]
    *monPointeur = NULL ou *monPointeur = &maVariable.
    (déclaration et initialisation d'un pointeur).

    monPointeur  : adresse de la variable pointée
    *monPointeur : valeur de la variable pointée, pour les calculs.
    &monPointeur : adresse du pointeur.
*/

void calculeNombre(int *nb) // On prend une valeur pour des calculs.
// void calculeNombre(int *nb) serait l'équivalent de void calculeNombre(int nb_local_calculeNombre)
{
    *nb = 42; // On calcule une valeur.
    // void calculeNombre(int nb);
    // nb = 42;
    // serait l'équivalent de :
    // void calculeNombre(int nb_local_calculeNombre);
    // nb_local_calculeNombre  = 42;

}

int main()
{
    int nombre = 0;
    printf("nombre = %d\n", nombre);
    calculeNombre(&nombre); // On envoie une adresse.
    printf("nombre = %d\n", nombre);
    return 0;
}
