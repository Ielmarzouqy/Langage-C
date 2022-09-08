#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Write C code here
   //√((x2-x1)² + (y2-y1)²)
   int x1;
   int x2;
   int y1;
   int y2;
   float  D;
   printf("donner la coordonner x1 de A: ");
   scanf("%d", &x1);
   printf("donner la coordonner  y1 de A: ");
   scanf("%d", &y1);
   printf("donner la coordonner x2  de B: ");
   scanf("%d", &x2);
      printf("donner la coordonner  y2 de B: ");
   scanf("%d", &y2);
   
   D = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
   printf("La distance entre A et B est :%.2f",D);
   
   

    return 0;
}