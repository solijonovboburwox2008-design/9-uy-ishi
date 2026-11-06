#include <stdio.h>
int main() { float a, b; char amal;
printf("Birinchi sonni kiriting: ");
scanf("%f", &a);

printf("Amalni kiriting (+, -, *, /): ");
scanf(" %c", &amal);

printf("Ikkinchi sonni kiriting: ");
scanf("%f", &b);

switch (amal) {
    case '+':
        printf("Natija = %.2f", a + b);
        break;

    case '-':
        printf("Natija = %.2f", a - b);
        break;

    case '*':
        printf("Natija = %.2f", a * b);
        break;

    case '/':
        if (b != 0) {
            printf("Natija = %.2f", a / b);
        } else {
            printf("Nolga bo'lish mumkin emas!");
        }
        break;

    default:
        printf("Noto'g'ri amal!");
}

return 0;
}