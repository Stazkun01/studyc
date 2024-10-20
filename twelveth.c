/*Challenge 1 : Paire ou Impaire
Écrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair.*/
#include <stdio.h>
#include <windows.h>
int n ;
int main(){
    printf("entrer un nombre : \n");
    scanf("%d" , &n);
    system("cls");
    if (n % 2 == 0){
        printf("ce nombre est pair ! ");
    }
    else {
        printf("ce nombre n'est pas pair ! ");
    }
    return 0;
}
