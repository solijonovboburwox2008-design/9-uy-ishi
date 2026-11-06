#include <stdio.h>
int main() { int tanlov;
printf("1 - Dollar (USD)\n");
printf("2 - Yevro (EUR)\n");
printf("3 - Rubl (RUB)\n");

printf("Valyutani tanlang: ");
scanf("%d", &tanlov);

switch (tanlov) {
    case 1:
        printf("Dollar (USD)");
        break;
    case 2:
        printf("Yevro (EUR)");
        break;
    case 3:
        printf("Rubl (RUB)");
        break;
    default:
        printf("Noto'g'ri tanlov!");
}

return 0;
}