#include <stdio.h>
#include <string.h>
int main() {
    char ch[20];
    char *ptr;
    int length;
    printf("Enter the string = ");
    fgets(ch, sizeof(ch), stdin);
    // here fgets creates a null character at the end of the string if we press the enter
    // so removing the null character and decrementing the length
    length = strlen(ch);
    if (ch[length] == '\n') {
        ch[length-1] = '\0';
        length--;
    }
    ptr = ch;
    for(int i =length; i>=0; i--){
        printf("%c",*(ptr+i));

    };
    printf("\n");
    return 0;
}
