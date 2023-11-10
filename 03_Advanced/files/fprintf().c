#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *fp;
    char name[20];
    int id;
    if((fp = fopen("test","w")) == NULL) {
        printf("Unable to open file...");
        exit(1);
    }
    printf("Enter name and ID of Student: ");
    gets(name);
    scanf("%d", &id);

    fprintf(fp, "My name is %s and id %d", name, id);
    fclose(fp);
    return 0;
}

