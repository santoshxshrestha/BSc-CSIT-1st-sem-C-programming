#include <stdio.h>
int a=3;
int b;
int c;
//here it is the similar thing to the function prototype but it is not the one 
//it is call the declaration of the global variable 

int main () {
    int sum = a+b;
    printf("The sum of the number: %d with another number: %d is: %d.\n",a, b, sum);
    printf("The number that is declared globally is :%d.\n",c);

    float x=12.2, y= 12.4;
    printf("The data for float test are x: %.2f ,and y: %.2f\n", x,y);
    // float mudulo = x%y;
    // here this won't work because of the behaviour of the modulo because it can't be performed with the float vals
    // printf("%f\n",mudulo);

}

int b = 20;
int c = 32;

//here it wont give us any error but if we call it on the main function when we have to declare the 
//variable above the main function 
int d = 23;
