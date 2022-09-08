#include <stdio.h>
#include <stdlib.h>
int main() {
    // Write C code here
  // = 2πr
   float r;
 const float pi=3.14;
  float pc;
  printf("donner le rayon du cercle r:");
  scanf("%f", &r);
  
   pc = 2*pi*r;
  printf("la circonférence du cercle est: %.2f", pc);
  
    return 0;
}