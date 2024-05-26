#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_SPACES_FOR_EACH_TAB "     "// 4 SPACES FOR 1 TAB

// detab will replace the TABS with the corresponding number of spaces to form a TAB
// i.e each tab can be 'formed' by 4 spaces then:
// input: <TAB><TAB>, output: '........' (dots represent spaces) or 8 spaces
int main(void){
    char current;

    while((current = getchar()) != EOF){
        if( current == '\t'){
            printf("%s", NUMBER_OF_SPACES_FOR_EACH_TAB);
            continue;
        }
        putchar(current);
    }
    return EXIT_SUCCESS;
}