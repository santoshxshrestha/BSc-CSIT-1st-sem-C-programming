#include <stdio.h>
int main () {
    int a = 0;
again:
    printf("Enter a positive number: ");
    scanf("%d",&a);

    if(a<0){
        printf("Enter a positive number you have entered: %d\n", a);
        goto again;
    }else {
    printf("you have entered the positive number and the number is: %d\n",a);
    }
    
    return 0;
}
