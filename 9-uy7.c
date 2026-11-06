#include <stdio.h>
int main() {
    int num, t=0;
    scanf("%d", &num);
    while(num>0){
        int son=num%10;
        t=t*10+son;
        num=num/10;
    }
    printf("%d\n", t);
    return 0;
}