#include <stdio.h>

int main() {
    // Write C code here
  //Somme = (a+b+c)
  //Moyenne = somme/3
  
  
   int a;
   int b;
   int c;
   int d;
   double M;
  
    printf("Donner le nombre a :");
    scanf("%d", &a);
    printf("\nDonner le nombre b: ");
    scanf("%d", &b);
    printf("Donner le nombre c :");
    scanf("%d", &c);
    printf("\nDonner le nombre d: ");
    scanf("%d", &d);
    
    M = (a+b+c+d)/4;
    printf(" La moyenne est : %lf",(double) M);
  
    
    return 0;
}