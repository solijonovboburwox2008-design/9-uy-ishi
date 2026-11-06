#include <stdio.h>
int main() {
    int tanlov;
   printf("1 - Avtomobil\n");
printf("2 - Avtobus\n");
printf("3 - Poyezd\n");
printf("4 - Samolyot\n");

printf("Tanlang: ");
scanf("%d", &tanlov);

switch (tanlov) {
    case 1:
        printf("Avtomobil");
        break;
    case 2:
        printf("Avtobus");
        break;
    case 3:
        printf("Poyezd");
        break;
    case 4:
        printf("Samolyot");
        break;
    default:
        printf("Noto'g'ri tanlov!");
}

return 0;
} 