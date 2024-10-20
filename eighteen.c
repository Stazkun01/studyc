/*Challenge 4 : Affichage des N Premiers Nombres Impairs
Écrivez un programme C qui demande un nombre entier n et affiche les n premiers nombres impairs. Par exemple, pour n = 5, affichez : 1, 3, 5, 7, 9.*/
#include <stdio.h>

int main() {
    int n;
    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    printf("Les %d premiers nombres impairs sont : ", n);
    for (int i = 0; i < n ; i++) {
        printf("%d, ", 2 * i + 1); 
    }
    return 0;
}