#include <stdio.h>

int main() {
    int angkaBulat;
    float angkaKoma = 1.5f;
    char karakter = 'a';
    char string[100] = "Hello";

    scanf("%d", &angkaBulat);
    getchar(); 
    printf("%d\n", angkaBulat);
    
    scanf("%f", &angkaKoma);
    getchar();
    printf("%.2f\n", angkaKoma);

    scanf("%c", &karakter);
    getchar();
    printf("%c\n", karakter);

    scanf("%[^\n]", string);
    getchar();
    printf("%s\n", string);

    return 0;
}
