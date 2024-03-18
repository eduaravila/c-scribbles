#include <stdio.h>
#include <stdlib.h>

int main(void){
    int c;
    int isEof;
    /* keep reading this if c is not EOF */
    while( (c = getchar(), isEof = (c == EOF)) !=1 ){
        putchar(c);
    }
    printf("%i",EOF);
    printf("%05d",199);

    return EXIT_SUCCESS;
}
