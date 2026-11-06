#include <stdio.h>
int main() {
    int i=10, summa=0;
    while(i<=30){
        summa=summa+i;
        i++;
    }
    printf("%d\n", summa);
    return 0;
}