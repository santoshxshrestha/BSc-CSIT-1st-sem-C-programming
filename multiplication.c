#include<stdio.h>
int main() {
    int a,product;
    printf("Enter the number for multiplication table = ");
    scanf("%i",&a);
    for(int i = 0; i <=10; ++i){
        product = a*i;
        printf("%ix%i=%i\n",a,i,product);
    }
    return 0;

}