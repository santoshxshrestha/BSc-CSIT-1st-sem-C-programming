#include<stdio.h>
int main() {
    int number, hundreds, tens, ones, sum;
    printf("Enter a three digit number : ");
    scanf("%d",&number);
    if(number<100 || number>999){
        printf("Error !!!\nThe number that you have entered is not a valid three digit number.");
    } else {
        hundreds = number/100;
        tens = (number/10)%10;
        ones = (number%10);
            sum = hundreds + tens + ones;
        printf("The sum of the digits is %d.\n",sum);

    }
    return 0;

}
