#include <stdio.h>
#include <stdlib.h>

int main(void){
    int c = getchar();
    /* this will print all the chars in the buff until we press ENTER; there are
     * ways to modify this default behaviour, i.e printing as soon as we press a
     * key */
    while( (c = getchar()) != EOF ){
        putchar(c);
    }

    return EXIT_SUCCESS;
}