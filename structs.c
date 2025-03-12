#include<stdio.h>
struct Student {
    unsigned Roll;
    char Name[20];
    float Percentage;
    unsigned Age;
};

int print_name(struct Student [], int);

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
    int found = 1;
    for(int i = 0; i<n; i++){
        if(students[i].Percentage > 70){
            found = 0;
            printf("%s who got %.2f\n",students[i].Name, students[i].Percentage);
        }   
    }

    if (found == 1) {
        printf("No one got the percentage greater than 70\n");
    }else {
        printf("There are the name of the student who got percentage above 70");
    }
    return 0;
}
