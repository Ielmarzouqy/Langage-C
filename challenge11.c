#include <stdio.h>

int main() {
    // Write C code here
    //la circonférence d'un rectangle = 2*(longueur + largeur).
     int L;
     int l;
     int S;
     printf("donner la longueur du rectangle: ");
     scanf("%d", &L);
     printf("\ndonner la largeur du rectangle: ");
     scanf("%d", &l);
     S = 2*(L+l);

     prinf("la circonférence d'un rectangle est: ", S);
    return 0;
}