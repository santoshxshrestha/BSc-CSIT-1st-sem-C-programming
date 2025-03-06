#include <stdio.h>
int a=3;
int b;
int c;
//here it is the similar thing to the function prototype but it is not the one 
//it is call the ceclaration of the global variable 

int main () {
    int sum = a+b;
    printf("The sum of the number: %d with another number: %d is: %d.\n",a, b, sum);
    printf("The number that is declared globally is :%d.\n",c);
}

int b = 20;
int c = 32;
