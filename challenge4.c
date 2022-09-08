#include <stdio.h>

int main() {
    // Mile = Km*1.609
    double Km ;
   // double Mile ;
    double Mile;
    printf("Entrer la distance en Mile :");
    scanf("%lf", &Mile);
    Km = Mile/1.609;
    
    printf("%lf", Km);
 

    return 0;
}