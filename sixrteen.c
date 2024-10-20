/*Challenge 2 : Factorielle d'un Nombre
Écrivez un programme C qui calcule la factorielle d'un nombre entier positif n entré par l’utilisateur. La factorielle de n est le produit de tous les entiers positifs inférieurs ou égaux à n. Par exemple, pour n = 5, affichez : 5! = 120.*/
#include <stdio.h>
int n , fact = 1;
int main(){
    printf("entrer le nombre : ");
    scanf("%d",&n);
    for (int i = 1 ; i <= n ; i++){
        fact*= i ;
    }
       printf("le nombre est :%d" , fact);
    return 0;
}