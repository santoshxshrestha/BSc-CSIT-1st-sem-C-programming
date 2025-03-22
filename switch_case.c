//take a input of operant form user as a character and then  perform operation according to that inputs by using switch case 
#include <stdio.h>
int main() {
    char ch;
    int a,b;
    printf("Enter the first number to perform operation: ");
    scanf("%d",&a);
    printf("Enter the second number to perform operation: ");
    scanf("%d",&b);

    printf("Enter the operant: ");
    //here we have to give space to the scanf because it will take only one character as input and then it will
    //be the \n thing
    // scanf("%c",&ch);
    scanf(" %c",&ch);
    // scanf("%s",&ch);

    switch (ch) {
        case '+':
            printf("The sum of %d and %d is %d\n",a,b,a+b);
        break;

        case '-':
        printf("The difference of %d and %d is %d\n",a, b,a-b);
        break;

        case '*':
        printf("The product of the %d and %d is %d\n",a,b,a*b);
        break;

        case '/':
        if (b!=0){
                printf("The division of %d and %d is %d\n", a, b, a/b);
            }else{
                printf("The number can't be divided by zer\n");
            };
            break;
        default:
        printf("Invalid inut\n");
        break;
    }
}
