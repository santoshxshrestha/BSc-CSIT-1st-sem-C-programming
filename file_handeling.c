//the following program will take input from the user and store it in a file and then read the file and display the content of the file.
# include <stdio.h>
#include <stdlib.h>

void clear() {
    #ifdef _WIN32
        system("cls"); 
    #else
system("clear");
    #endif
}

int main(){
    struct student {
        char name[50];
        int symbol;
        char address[100];
    };
    FILE *fp;
    fp = fopen("./student.txt", "w+");
    int i,n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    clear();
    struct  student st[n];
    for(i=0; i<n; i++){
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", st[i].name);

        printf("Enter the symbol number of student %d: ", i+1);
        scanf("%d", &st[i].symbol);

        printf("Enter the address number of student %d: ", i+1);
        scanf("%s", st[i].address);

        printf("\n");
        fwrite(&st[i],sizeof(st[i]),1,fp);

        clear();
    }

    rewind(fp);
    for(int i = 0; fread(&st[i], sizeof(st[i]),1,fp)==1; i++){
        printf("name: %s\n", st[i].name);
        printf("symbol: %d\n", st[i].symbol);
        printf("address: %s\n", st[i].name);
        printf("\n");
    }
    fclose(fp);
}

