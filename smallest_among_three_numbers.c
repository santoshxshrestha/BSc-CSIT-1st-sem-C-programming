#include <stdio.h>
void compare(int, int ,int);
int main () {
    int a,b,c;
    printf("Enter the three numbers for the comparison\n");
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    printf("you have entered following numbers respectively: %d, %d, %d\n", a, b, c);

    compare(a,b,c);

    return 0;
}

void compare(int a, int b, int c) {
    if(a<b && a<c) {
        printf("The smallest number is %d\n", a);
    }else if (b<a && b<c) {
        printf("The smallest number is %d\n", b);
    }else{
        printf("The smallest number is: %d\n", c);
    }
}
