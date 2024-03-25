#include <stdio.h>
#include <stdlib.h>

int main(void){
    int total = 0;
    int input;
    while( (input = getchar()) != EOF ){
        if ( input == '\b' ){
            putchar('\\');
            putchar('b');
        }
        if ( input == '\t' ){
            putchar('\\');
            putchar('t');
            continue;
        }
        else if(input == '\\'){
            putchar('\\');
            putchar('\\');
        }
   }

    return  EXIT_SUCCESS;
}