//program that will take input the marks obtained by the 5 students in 5 subjects 
//and also their address, age and roll no and prints out the total and percentage of them
#include <stdio.h>
    struct students {
        char name[20];
        int age;
        int rollno;
        char address[50];
        struct marks{
            int physics;
            int c;
            int digital_logic;
            int maths;
            int iit;
        }m;
    }s[5];

int main() {
    for( int i = 0; i<5; i++){
    printf("Enter the name of the student: ");
    scanf("%s",s[i].name);

    printf("Enter the age of the %s: ",s[i].name);
    scanf("%d",&s[i].age);

    printf("Enter the roll number of the %s: ",s[i].name);
    scanf("%d",&s[i].rollno);

    printf("Enter the address of the %s: ",s[i].name);
    scanf("%s",s[i].address);

    printf("\n");
    printf("Enter the marks obtained by the %s\n",s[i].name);

    printf("Enter the marks obtained by the %s in physics: ",s[i].name);
    scanf("%d",&s[i].m.physics);

    printf("Enter the marks obtained by the %s in c: ", s[i].name);
    scanf("%d",&s[i].m.c);

    printf("Enter the marks obtained by the %s in digital_logic: ",s[i].name);
    scanf("%d",&s[i].m.digital_logic);

    printf("Enter the marks obtained by the %s in maths: ", s[i].name);
    scanf("%d",&s[i].m.maths);

    printf("Enter the marks obtained by the %s in iit: ", s[i].name);
    scanf("%d",&s[i].m.iit);
    printf("\n");
    };


    //calculation block
    for(int i= 0; i<5; i++){
    int total = 0;
    total = s[i].m.iit + s[i].m.maths + s[i].m.digital_logic + s[i].m.c + s[i].m.physics;
    float percentage;
    percentage = (total/500.0)*100;
    printf("\n");
    printf("Details of %s of age %d who lives in %s, His roll number is %d\n",s[i].name, s[i].age, s[i].address, s[i].rollno);
    printf("The total marks got by the %s is: %d\n",s[i].name, total);
    printf("The total percentage got by %s is: %.2f%%\n",s[i].name, percentage);
    printf("\n");
    };

}
