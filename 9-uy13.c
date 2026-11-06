#include <stdio.h>
int main() { int tanlov;
printf("1 - Osh\n");
printf("2 - Lag'mon\n");
printf("3 - Manti\n");
printf("4 - Shorva\n");
printf("5 - Somsa\n");

printf("Taom tanlang: ");
scanf("%d", &tanlov);

switch (tanlov) {
    case 1:
        printf("Osh");
        break;
    case 2:
        printf("Lag'mon");
        break;
    case 3:
        printf("Manti");
        break;
    case 4:
        printf("Shorva");
        break;
    case 5:
        printf("Somsa");
        break;
    default:
        printf("Noto'g'ri tanlov!");
}

return 0;
}