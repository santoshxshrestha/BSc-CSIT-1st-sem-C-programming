#include <stdio.h>
int main() {
    FILE *iptr, *optr;
    iptr = fopen("input.txt", "r");
    optr = fopen("output.txt", "w");
    int ch;
    while ((ch = fgetc(iptr)) != EOF) {
        fputc(ch, optr);
        //here the fputc is similar to the fprintf but it will write the  character in the file
    }
}
