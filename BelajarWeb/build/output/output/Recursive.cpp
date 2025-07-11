#include <stdio.h>

void hw(int i){
    if (i == 5) return;

    hw(i + 1);
    printf("%d\n", i);
}

int main(){

    hw(0);

    return 0;
}