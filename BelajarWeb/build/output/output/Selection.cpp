#include <stdio.h>

int main()
{
    int angka1, angka2, angka3;
/*if, else if, else

if(angka == 0){
   printf("nol");
}
else if(angka%2 == 1){
   printf("ganjil");
}
else {
   printf("genap");
}*/
        scanf("%d %d %d", &angka1, &angka2, &angka3);
        getchar();

        if (angka1 < angka2)
        {
            printf("Angka kurang dari %d\n", angka2);
        }
        else if (angka1 >= angka2 && angka1 <= angka3)
        {
            printf("%d berada di antara %d dan %d\n", angka1, angka2, angka3);
        }
        else
        {
            printf("Angka lebih dari %d\n", angka3);
        }

    /* Switch case
        switch (angka)
        {
            case 0:
                printf("nol");
                break;
            case 1:
                printf("satu");
                break;
            case 5:
                printf("lima");
                break;
            default: //elsenya switch
                printf("Selain nol satu dan lima");
        }
    */

    // Ternary if

    /* kondisi ? benar : salah
    printf("%s", (angka % 2 == 0 ? "genap" : "ganjil"));
    // varian lain
    printf("%s", (angka < 2 ? "lebih kecil dari 2" : angka > 2 ? "lebih besar dari 2"
                                                               : "2"));
    */
    return 0;
}