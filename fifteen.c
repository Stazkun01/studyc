/*Challenge 1 : Table de Multiplication
Écrivez un programme C qui demande un nombre à l’utilisateur et affiche sa table de multiplication de 1 à 10. Par exemple, pour le nombre 4, affichez :

4 * 1 = 4 4 * 2 = 8 4 * 3 = 12 ... 4 * 10 = 40*/
#include <stdio.h>
int n , count= 1;
int main(){
    printf("entrer le nombre : ");
    scanf("%d" , &n);
    for (int i=0 ; i<10;i++){
        printf("%d x %d = %d \n", n , count , n*count);
        count++;
    }
    return 0;
}