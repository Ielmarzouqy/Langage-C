#include <stdio.h>

int main() {
   int C;
   int F ;
   printf("la température en Fahrenheit ");
   scanf("%d", &F);
    C = (F-32)/1.8;
   printf("%d", C);
    return 0;
}