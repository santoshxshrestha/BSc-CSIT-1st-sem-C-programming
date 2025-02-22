#include<stdio.h>
struct students {
    char name[20];
    unsigned age;
    unsigned yearofbirth;
}hari;

int main(){
    hari.age = 23;
    hari.yearofbirth  = 2004;
    printf("enter the name for the hari: ");
    scanf("%s",hari.name);

    printf("%s\n",hari.name);
    printf("%u\n",hari.age);
    printf("%u\n",hari.yearofbirth);

    return 0;
}
