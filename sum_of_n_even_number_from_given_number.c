#include <stdio.h>
int calc(int,int);
int main() {
    int a = 0;
    printf("Enter a number from where you want to start : ");
    scanf("%d",&a);

    int n = 0 ;
    printf("Enter a number for sum of first n even number from the provided starting point: ");
    scanf("%d", &n);

   int total =  calc(a , n);
   printf("Total sum form %d to %d th element is:%d\n",a,n,total);
    return 0;
}
int calc(int a, int n){
//the starting point must be number that we enter 
//if the number is odd
//we add 1 to make it even then we start the calculation
    if(a%2!=0){
        a+=1;
        printf("Here starting point or number %d is not even so starting from %d",a,a+1);
    }
    int sum = 0;
    for(int i = 0; i<n; i ++){
        sum+=a;
        a+=2;
    }
    return sum;
}

