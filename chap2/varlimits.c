#include <stdio.h>
#include <limits.h>


int main(void){
    printf("char %d\n", CHAR_MIN);
    printf("char %d\n", CHAR_MAX);

    char min=0;
    char temp = min-1;
    char max = 0;

    while(temp < min){
        min = temp;
        temp--;
    }
    printf("char %d\n", min);
}