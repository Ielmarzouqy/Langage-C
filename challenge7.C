#include <stdio.h>

int main() {
    // Write C code here
    //a+b, a-b, a*b, a/b, a%b 
    int a;
    int b;
     
      printf("Donner le nombre a :");
    scanf("%d", &a);
     printf("\nDonner le nombre b :");
    scanf("%d", &b);
    
    printf(" La somme est : %d", a+b);
    printf(" \nLa soustraction est :%d", a-b);
    printf("\nLa division est : %d", a/b);
    printf(" \nLa multiplication est : %d", a*b);
    printf("\nLe reste de la division est : %d", a%b);
    
    
    return 0;
}