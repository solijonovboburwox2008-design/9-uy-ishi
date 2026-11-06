#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    while(n!=12345){
        printf("notogri parol:");
        scanf("%d", &n);
    }
    printf("parol togri:");
    return 0;
}