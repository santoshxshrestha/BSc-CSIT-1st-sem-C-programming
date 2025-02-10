#include <stdio.h>
int main() {
    int i = 10, *ip;
    float f = 2.34, *fp;

    char c = 'a', *cp;

    ip = &i;
    fp = &f;
    cp = &c;
    printf("The address of i = %p\n", ip);
    printf("The address of f = %p\n", fp);
    printf("The address of c = %p\n", cp);

    ip++;
    fp++;
    cp++;
    
    printf("The address of i after= %p\n", ip);
    printf("The address of f after= %p\n", fp);
    printf("The address of c after= %p\n", cp);
}
