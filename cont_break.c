#include <stdio.h>
int main() {
    for(int i = 0 ; i<100 ; i++) {

        //here break is above the printf so it will break at the turn of 40 
        //hence the 40 wont be printed
        if(i==40){
            break;
        }

        if(i == 2 ){
            continue;
        }
        else {
        printf("We got the number: {%d} \n",i);
        }

    }
}
