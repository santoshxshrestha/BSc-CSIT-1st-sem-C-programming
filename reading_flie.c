#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("./student.txt", "r");
    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}

