#include<stdio.h>
struct Student {
    unsigned Roll;
    char Name[20];
    float Percentage;
    unsigned Age;
};

int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);


    struct Student students[n] ;

    printf("Enter the details of the students.\n");
    for(int i=0; i<n; i++) {

        printf("\n");

        printf("Enter the Name of the student%d: ",i+1);
        scanf("%s",students[i].Name);

        printf("Enter the Roll number of the student%d: ",i+1);
        scanf("%u",&students[i].Roll);

        printf("Enter the Age of the student%d: ",i+1);
        scanf("%u",&students[i].Age);

        printf("Enter the Percentage of the student%d: ",i+1);
        scanf("%f",&students[i].Percentage);

        printf("\n");

    };
    print_name(students, n);
    return 0;
}

int print_name(struct Student students[], int n){
    printf("The name of the students who got percentage greater then 70 are: \n");
    for(int i = 0; i<n; i++){
        if(students[i].Percentage > 70){
            printf("%s got %.2f\n",students[i].Name, students[i].Percentage);
        }
    }

    return 0;
}
