#include <stdio.h>
#include <math.h>
int term(int n){
    int sum = 0;
    if(n == 0 ) {
        sum = 0;
    }else if (n == 1) {
        sum =1;
    }else {
        sum += (term(n-2)+term(n-1));
    }
    return sum;
}

int check(int n){
    if(n == 0 ||n == 1){
        printf("%d is not a prime number.\n",n);
        return  0;
    }else {
        double square_root = sqrt(n);
        for(int i = 2 ; i<=square_root; i ++){
            if(n%i==0){
                printf("The nth term %d is not a prime number and\n",n);

                return 1;
            } 
        }
        printf("The nth term %d is a prime number\n",n);
        return 0;
    }
}

int main(){
    int n = 0;
    printf("Enter the number for finding out the term in fibonacci series: ");
    scanf("%d",&n);
    int result = term(n);
    printf("The nth term of the fibonacci series is %d\n",result);

    //checking
    check(result);

    return 0;
}
