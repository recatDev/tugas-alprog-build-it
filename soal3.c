#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    unsigned long long bil;
    int x = 1;
    scanf("%llu", &bil);
    
    for (unsigned long long i = 2; i <= sqrt(bil); i++) {
            if (bil % i == 0) {
                x = 2;
            }
    
    }
    if (x == 1) {
        printf("PRIMA");
    }
    else {
        printf("BUKAN");
    }
    return 0;
}