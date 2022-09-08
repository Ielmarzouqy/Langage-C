
#include <stdio.h>
#include <stdbool.h>
int main() {
    // challenge 5
 int C;
   int F ;
   printf("la température en Fahrenheit ");
   scanf("%d", &F);
    C = (F-32)/1.8;
   printf("%d", C);
  
    // (très froid, froid, chaud, très chaud)
    if (C < -17){
    printf("\n la sensation ressentie :très froid");
    }
     if (-17<C<0){
    printf("\n la sensation ressentie : froid");
    }
     if (C>0 ){
    printf("\n la sensation ressentie :chaud");
    }
    if (C<47){
     printf("\n la sensation ressentie :chaud");   
        
    }
     if (C >47){
    printf("\n la sensation ressentie :très chaud");
    }
      return 0;
}