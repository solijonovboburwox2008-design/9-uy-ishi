#include <stdio.h>
int main() {
    int n=0, summa;
    scanf("%d", &n);
    while(n<100){
        scanf("%d", &summa);
        n=n+summa;
    }
    printf("%d\n", n);
    return 0;
}