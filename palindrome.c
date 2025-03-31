#include<stdio.h>
#include<string.h>
int main() {
    char str[100], rev_str[100];
    int result;
    printf("Enter the string = ");
    scanf("%s",str);

    int length = strlen(str);

    for(int i=0; i<length; i++) {
        rev_str[i] =str[length-i-1];
    }
    result = strcmp(str, rev_str);
    if (result == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
