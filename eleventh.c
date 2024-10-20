/*Challenge 10 : Volume d'une sphère
Écrivez un programme pour trouver le volume d'une sphère. Prenez le rayon de la sphère en entrée de l'utilisateur. Formule pour le volume d'une sphère :

Volume = (4/3) * π * r³*/
#include <stdio.h>
#include <math.h>
float r , volume , pi = 3.14159265359 ;
int main(){
    printf("entrer le rayon du sphere : ");
    scanf("%f", &r);
    volume = (4/3)*pi*pow(r,3);
    printf("le volume du sphere est : %f" , volume);
}