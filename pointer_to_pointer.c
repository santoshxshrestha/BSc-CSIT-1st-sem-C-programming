#include <stdio.h>

int main() {
    int a=5, *p , **pp;
    p = &a;
    pp = &p;

    printf("Value of a: %d\n", a);
    printf("Value of a using pointer: %d\n", *p);
    printf("Value of a using double pointer: %d\n", **pp);

}
