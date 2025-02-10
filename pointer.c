#include <stdio.h>
int main() {
    int age = 20, *page;
    float salary = 40000, *psalary;
    page = &age;
    psalary = &salary;
    printf("Address of age: %u and value of age: %d \n", page, *page);
    printf("Address of salary: %u and value of address is: %f \n", psalary, *psalary);
}
