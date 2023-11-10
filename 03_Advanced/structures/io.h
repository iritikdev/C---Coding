#include <stdio.h>
int input(char *message, char *format, int *where)
{
    printf("%s", message);
    scanf(format, where);
}