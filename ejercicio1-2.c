#include <stdio.h>
#include <unistd.h>

int main()
{
    int f = fork();
    if (f == 0)
    {
        execl("./ej1", (char *), NULL);
    }
    else
    {
        prinf("Hello World!\n");
        prinf("%d\n", (int)getpid());
        execl("./ej1", (char *), NULL);
    }
    return 0;
}