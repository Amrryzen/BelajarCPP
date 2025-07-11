#include<stdio.h>

/*void printHW(){
    printf("Hello World!");
}*/

// int getNumber(){
//     return 5;
// }

// int sum(int first, int second){
//     int total = first + second;
//     return total;
// }
int main(){

    int arr[10];
    
for (int i = 0; i < 10; i++) {
        arr[i] = 0;
        printf("%d = %p\n", i, (void*)&arr[i]);
    }

    int index, value;
    printf("Masukkan index dan nilai: ");
    scanf("%d %d", &index, &value);

    if (index >= 0 && index < 10) {
        int *a = &arr[index];  // pointer mengarah ke elemen array
        *a = value;            // isi nilai lewat pointer
    } else {
        printf("Index di luar batas!\n");
    }

    // Tampilkan isi array
    for (int i = 0; i < 10; i++)
        printf("%d = %d\n", i, arr[i]);

    //printHW();

    //function
    // int a = getNumber();
    // printf("%d", getNumber());

    //Pointer
    // int a = 0;
    // int *p;
    // int **p2;
    // p = &a;
    // p2 = &p;
    // printf("%d\n", **p2);
    // printf("%d\n", &p);
    
    // int hasilSum = sum(3, 5);
    // printf("%d", hasilSum);
    
    return 0;
}