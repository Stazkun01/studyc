/*Challenge 9 : Calcul de la distance entre deux points dans un espace 3D
Écrivez un programme C pour trouver la distance entre deux points donnés dans un espace 3D. Formule :

Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)*/
#include <stdio.h>
#include <math.h>

float x1, x2, y11, y2, z1, z2, distance;

int main() {
    printf("veuillez entrer x1 : \n");
    scanf("%f", &x1);
    printf("veuillez entrer x2 : \n");
    scanf("%f", &x2);
    printf("veuillez entrer y1 : \n");
    scanf("%f", &y11);
    printf("veuillez entrer y2 : \n");
    scanf("%f", &y2);
    printf("veuillez entrer z1 : \n");
    scanf("%f", &z1);
    printf("veuillez entrer z2 : \n");
    scanf("%f", &z2);

    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y11), 2) + pow((z2 - z1), 2));

    printf("la distance est : %.2f", distance);

    return 0;
}
