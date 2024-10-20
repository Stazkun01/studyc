/*Challenge 3 : Somme des N Nombres
Écrivez un programme C qui demande un nombre entier n à l’utilisateur et calcule la somme des n premiers nombres naturels. Par exemple, pour n = 4, la somme est 1 + 2 + 3 + 4 = 10*/
#include <stdio.h>
int n , sum ;
int main(){
    printf("entrer le nombre : ");
    scanf("%d",&n);
    for (int i = 1 ; i <= n ; i++){
        sum+= i ;
    }
       printf("le nombre est :%d" , sum);
    return 0;
}