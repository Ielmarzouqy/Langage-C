#include <stdio.h>

int main() {
   double C;
   double F ;
   printf("la température en Celsius ");
   scanf("%lf", &C);
   printf("%lf",  (C * 1.8)+32);
    return 0;
}