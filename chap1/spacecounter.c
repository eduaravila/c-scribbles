#include <stdio.h>
#include <stdlib.h>

int main(void){
    int total = 0;
    int input;
    while( (input = getchar()) != EOF ){
        if (input == 10 || input == 9) {
            printf("%d\n",input);
            total++;
        }
   }
    printf("total (space, tab, blanks) %d\n", total);
    return  EXIT_SUCCESS;
}