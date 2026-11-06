#include <stdio.h>
int main() {
    int son,musbat=0,manfiy=0;
    printf("Son kiriting(0=stop):");
    scanf("%d", &son);
    while(son!=0){
        if (son>0){
            musbat++;
        } else{
            manfiy++;
        }
         printf("Son kiriting(0=stop):");
         scanf("%d", &son);
    }
printf("musbat sonlar: %d\n", musbat);
printf("manfiy sonlar: %d\n", manfiy);
return 0;
}