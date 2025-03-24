#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("./student.txt","w");
    char name[30];
    printf("Enter your name: ");
    scanf("%s",name);
    fprintf(fp, "%s\n",name);
    fclose(fp);


    return 0;
}

