#include <stdio.h>

int main()
{

    // For
    //  for (int i = 0; i <= 10; i += 2)
    //  {
    //      printf("%d\n", i);
    //  }

    // while
    //  int j = 1;
    //  while (j <= 10){
    //      printf("%d\n", j++);
    //  }

    // while do
    //  int k = 1;
    //  do{
    //      printf("%d\n", k++);
    //  }while (k<=10);

    // nested loop
    int tinggi = 5, lebar = 10;
    scanf("%d %d", &tinggi, &lebar);
    getchar();
    for (int i = 0; i < tinggi; ++i)
    {
        for (int j = 0; j < lebar; ++j)
        {
            if (i == 0 || i == tinggi - 1)
            {
                printf("*");
            }
            else
            {
                if (j == 0 || j == lebar - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
