#include <stdio.h>

int main() {
    // Mile = Km*1.609
    double Km ;
   // double Mile ;
    double Mile;
    printf("Entrer la distance en Km :");
    scanf("%lf", &Km);
    Mile = Km*1.609;
    
    printf("%lf", Mile);
 

    return 0;
}