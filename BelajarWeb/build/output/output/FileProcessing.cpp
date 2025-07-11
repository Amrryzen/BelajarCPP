#include <stdio.h>

int main()
{

    // filebase

    // read(r), write(w), append(a)
    // read, write (r+)
    // read, write (w+)
    // append, read (a+)

    // open, process, close
    char txt[200];
    FILE *fp;
    fp = fopen("data.txt", "a+");

    fprintf(fp, "123");
    // rewind(fp);
    fscanf(fp, "%[^\n]", txt);
    printf("%s", txt);
    fclose(fp);
    getchar();
    return 0;
}