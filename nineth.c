/*Challenge 8 : Calcul de la moyenne g�om�trique
�crivez un programme en C pour trouver la moyenne g�om�trique de trois nombres saisis par l'utilisateur. Formule :

Moyenne g�om�trique = (a * b * c)^(1/3)*/

#include <stdio.h>
#include <math.h>
float a , b , c , pw , moyenne;
int main (){
    printf("====================Calculateur de Moyenne Geometrique=============================\n");
    printf("vouillez entrer le premier nombre : \n");
    scanf("%f",&a);
    printf("vouillez entrer le deuxieme nombre : \n");
    scanf("%f",&b);
    printf("vouillez entrer le troisieme nombre : \n");
    scanf("%f",&c);
    pw = (a * b * c);
    moyenne = pow(pw,(1/3));
    printf("La moyenne geometrique des nombres est : %f\n" , moyenne);
    printf("=====================================================================================");
}
