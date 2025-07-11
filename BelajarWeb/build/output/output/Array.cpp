#include <stdio.h>
#include <string.h>

int main()
{

    char str[30];

    scanf("%[^\n]", str);
    getchar();

    //int nama = strlen(str);

    //cara ribet untuk uppercase
    // for (int i = 0; i < panjang; i++){
    //     if (str[i] >= 97 && str[i] <= 122){
    //         str[i] -= 32;
    //     }
    // }
    // printf("%s", str);
    // int listAngka[20];
    //  char str[20][100];
    // cara cepat untuk  uppercase

    printf("%s", strupr(str));
    // scanf("%s", str[0]);
    // strcpy(str[0], "HELLO WORLD");
    // printf("%s\n", str[0]);

    // listAngka[0]=1;
    // printf("%d\n", listAngka[0]);
    // listAngka[0]=2;
    // printf("%d\n", listAngka[0]);

    return 0;
}