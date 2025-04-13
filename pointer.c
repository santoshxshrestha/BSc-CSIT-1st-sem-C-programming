#include <stdio.h>
int main() {
    int age = 20, *page;
    float salary = 40000.5334, *psalary;
    page = &age;
    psalary = &salary;
    printf("Address of age: %p and value of age: %d \n", &page, *page);
    printf("Address of salary: %p and value of address is: %.2f \n", &psalary, *psalary);
}
