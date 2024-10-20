/*Challenge 6 : Calcul et affichage des résultats
Deux nombres réels, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.*/
#include <stdio.h>
#include<windows.h>
int a , b;
int main(){
    printf("entrer le premier nombre : ");
    scanf("%d" , &a);
    printf("entrer le deuxieme nombre : ");
    scanf("%d" , &b);
    system("cls");
    printf("%d\n" , a+b);
    printf("%d\n" , a-b);
    printf("%d\n" , a*b);
    printf("%d\n" , a/b);
}
