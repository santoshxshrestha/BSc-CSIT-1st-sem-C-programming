/*Write a program to evaluate the area of triangle with 3 sides given and display
the result (take the value of sides from user as input).
[Hints: area=sqrt(s(s-a)(s-b)(s-c)) where a,b,c are the sides of the triangle and
s=(a+b+c)/2]*/
#include<stdio.h>
#include<math.h>
int main() {
    float a,b,c,s;
    printf("Enter three sides of the triangle\n");
    scanf("%f %f %f",&a,&b,&c);
    if (a + b > c && b + c > a && a + c > b) {
        s = (a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is %.2f\n",area);
    }
    else {
        printf("The given sides doesn't form a valid triangle\n");
    }
    
    return 0;
}