#include <stdio.h>

int main()
{
    int angka1, angka2;
    
    scanf("%d %d", &angka1, &angka2);
    getchar();
    printf("Ini hasil dari pertambahannya : %d\n", angka1 + angka2);

    scanf("%d %d", &angka1, &angka2);
    getchar();
    printf("Ini hasil dari pengurangannya : %d\n", angka1 - angka2);
    
    scanf("%d %d", &angka1, &angka2);
    getchar();
    printf("Ini hasil dari pengaliannya : %d\n", angka1 * angka2);
    
    scanf("%d %d", &angka1, &angka2);
    getchar();
    printf("Ini hasil dari pembagiannya : %d\n", angka1 / angka2);
    
    scanf("%d %d", &angka1, &angka2);
    getchar();
    printf("Ini hasil dari modulusnya : %d\n", angka1 % angka2);
    
    
    // printf("Ini kurang : %d\n", 10-5);
    // printf("Ini kali : %d\n", 2*4);
    // printf("Ini bagi : %d\n", 5/2);
    // printf("Ini bagi (desimal) : %f\n", 10.0 / 3.0);
    //printf("Arithmetic : (%d+%d)/%d = %d\n", 5, 2, 3, (5 + 2) / 3);

    /*printf("AND : %d\n", 6&5);
    printf("OR : %d\n", 6|5);
    printf("XOR : %d\n", 6^5);
    printf("Shift Right : %d\n", 6>>2);
    printf("Shift Left : %d\n", 6<<2);
*/
    /* pre-increment
    int angka = 0;
    printf("%d\n", ++angka);
    printf("%d\n", angka);*/

    /* post-increment
    int angka = 0;
    printf("%d\n", angka++);
    printf("%d\n", angka);*/

    /* pre-decrement
    int angka = 0;
    printf("%d\n", --angka);
    printf("%d\n", angka);*/

    /* post-decrement
    int angka = 0;
    printf("%d\n", angka--);
    printf("%d\n", angka);*/

    //Challenge
    //printf("Shift Left : %d\n", 6<<5);
}