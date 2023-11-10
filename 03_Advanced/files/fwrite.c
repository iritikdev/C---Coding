#include<stdio.h>
#include<stdlib.h>

int main() {
    char string[] = "Hi! I am Learning file in C language.";
    FILE *fp;
    if ((fp = fopen("test", "w")) == NULL)
        printf("Unable to open file");
    int n = fwrite(string, 1, sizeof(string), fp);
    fclose(fp);
    return 0;
}