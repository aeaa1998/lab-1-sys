#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *file1, *file2;
    char filename[100], c;
    if (argc > 2)
    {
        file1 = fopen(argv[1], "r");
        if (file1 == NULL)
        {
            exit(0);
        }
        file2 = fopen(argv[2], "w");
        if (file2 == NULL)
        {
            exit(0);
        }
        c = fgetc(file1);
        while (c != EOF)
        {
            fputc(c, file2);
            c = fgetc(file1);
        }
        fclose(file1);
        fclose(file2);
    }
    return 0;
}