#include "stdio.h"
#include "stdlib.h"
#include "longestLine.h"

int getLine(char* line, int maxchars);
void copy(char *target, char* source);
void printarr(char *target, int size);

#define MAX_LINE_SIZE 1000

int main(void){
    int size = 0;
    char line[MAX_LINE_SIZE];

    while((size = getLine(line, MAX_LINE_SIZE)) > 0){
       NewFunction(size, line);

    }

    return EXIT_SUCCESS;
}


void NewFunction(int size, char line[1000])
{
        printf("%d ",size);
        printarr(line, size);
        printf("%p ", line);
        printf("%p ", &line[1]);
        printf("%c ", *(&line[1]+ 5)); // testing -> prints 'g'
        printf("%c",'\n');
}int getLine(char* line, int maxchars){
    int i = 0;
    char c;
    while(i < maxchars && (c = getchar()) != '\n' && c != EOF) {
        line[i] = c;
        i++;
    }
    if (i == 1 && line[i] == '\n'){
        return 0;
    }

    if (i > 0) {
        line[i] = '\0';
    }

    return i;
}

void printarr(char* arr, int size){
    for(int i =0; i < size ; i++){
        printf("%c", arr[i]);
    }
}