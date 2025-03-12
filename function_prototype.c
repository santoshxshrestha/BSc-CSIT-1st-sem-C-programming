#include <stdio.h>
int add(int, int);
int print_string(char string[]);

int main() {
    int a=0, b=0;
    printf("Enter two numbers\n");

    printf("Enter the fist number a: ");
    scanf("%d", &a);

    printf("Enter the second number b: ");
    scanf("%d", &b);

    int result =     add(a,b);
    printf("The result is: %d\n", result);

    char string[20];
    printf("Enter the string: ");
    scanf("%s",string);

    print_string(string);
}

int add(int a,int b){
    int result = a + b;
    return result;
}

int print_string(char string[20]){
    printf("%s\n",string);
return 0;
}

