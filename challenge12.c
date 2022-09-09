#include <stdio.h>
#include <stdlib.h>

int main() {


    char num[3];
    printf(" donner 3 nombre");
    scanf("%s", &num);

    printf("%c%c%c", num[2], num[1], num[0]);


   return 0;
}