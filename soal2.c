#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char kata1[100];
    char kata2[100];
    
    scanf("%s", kata1);
    scanf("%s", kata2);
    
    if (strlen(kata1) == strlen(kata2)) {
        if (strcmp(kata1, kata2) == 0) {
            printf("IDENTIK");
        }
        else {
            printf("MIRIP");
        }
    }
    else {
        printf("BERBEDA");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
