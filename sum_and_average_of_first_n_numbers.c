#include <stdio.h>
int sum (int);
int average (int, int);
int main() {
    int n;
    printf("Enter the nth number for sum and average: ");
    scanf("%d",&n);

    int total = sum(n);
    printf("The sum of numbers up to nth number is: %d\n",total);

    int mean = average(total, n);
    printf("The average of numbers up to nth number is: %d\n",mean);

}

int sum(int n){
    if(n==0){
        return 0;
    }else{
        int total = n;
        total += sum(--n);
        return total;
    }
}

int average(int sum,int n){
    return(sum/n);
}
