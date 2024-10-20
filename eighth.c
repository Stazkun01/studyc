/*Challenge 7 : Moyenne pondérée de trois nombres
Écrivez un programme en C pour calculer la moyenne pondérée de trois nombres donnés par l'utilisateur avec les pondérations suivantes :

1er nombre : pondération 2
2ème nombre : pondération 3
3ème nombre : pondération 5*/
#include <stdio.h>
float a , b , c ;
float moy ;
int main(){
    printf("entrer le premier nombre : ");
    scanf("%f",&a);
    printf("entrer le deuxieme nombre : ");
    scanf("%f", &b);
    printf("entrer le troisieme nombre : ");
    scanf("%f", &c);
    a = a * 2;
    b = b * 3;
    c = c * 5;
    moy = (a + b + c) / 10;
    printf("la moyen ponderer des nombre est %f" , moy);

}
