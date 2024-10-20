/*Challenge 3 : Somme de Deux Valeurs
Écrivez un programme C pour calculer la somme de deux valeurs entières données. Si les deux valeurs sont identiques, le programme doit renvoyer le triple de leur somme.*/
#include <stdio.h>
int a , b;
int main(){
    printf("entrer la premier  valeur : ");
    scanf("%d",&a);
    printf("entrer la deuxieme  valeur : ");
    scanf("%d",&b);
    if (a == b){
        printf("la somme est %d" , a+b+b);
    }
    else{
        printf("la somme est %d" , a+b);
    }
}