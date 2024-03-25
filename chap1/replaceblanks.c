#include <stdio.h>
#include <stdlib.h>

int main(void){
    int total = 0;
    int input, prev;
    while( (input = getchar()) != EOF ){
        if (input == ' ' && prev == ' ') {
            continue;
        }
        putchar(input);
        prev = input;
   }

    return  EXIT_SUCCESS;
}