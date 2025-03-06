#include <stdio.h>

int main () {
    char str1[20], str2[20];
    printf("Enter the first string: ");
    scanf("%s", str1);
    puts(str1);
    printf("%s\n",str1);
    //here the printf reads the array of the char untill the \n is found and it terminates it 
    //then to get the new line we have to put \n but the puts thing reads all the array so it also reads the \n 
    //thing and also print that too so we get to see the new line there 


}
