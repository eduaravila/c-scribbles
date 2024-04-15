#include <stdio.h>
#include <stdlib.h>

// Write a program to print a histogram of the frequencies of different characters
// in its input.

// horizontal histogram (character counter (n = 27 or the number of char in the alphabet))
// input:
// test
// output
// starting from A to Z , * indicate the number of times a word with n chars
// appeared, a word is registered every time ENTER is pressed
// output:
//a:
//b:
//c:
//d:
//e: *
//f:
//g:
//h:
//i:
//j:
//k:
//l:
//m:
//n:
//o:
//p:
//q:
//r:
//s: *
//t: **


void printWordHistrogram(int* n, size_t size);
int *resetArr(size_t size);

#define MAX_HISTOGRAM_SIZE ('z' - 'a' + 1)

int main(void){
    int input ,currentWordCharCounter;
    input = 0;
    int* counter = resetArr(MAX_HISTOGRAM_SIZE);

    while( ( input = getchar() )!= EOF){
        if(input == '\n'){
            printWordHistrogram(counter, MAX_HISTOGRAM_SIZE);
            counter = resetArr(sizeof(counter));
            continue;
        }

        if( input >= 'a' && input <= 'z'){
            counter[input - 'a']++;
        }
    }

    return EXIT_SUCCESS;
}

int *resetArr(size_t size){
    int* counter = malloc(size * sizeof(int));
    if(!counter){
    return NULL;
    }

    for(int i = 0; i < size * sizeof(int); i++){
        printf("%d\n", i);
        counter[i] = 0;
    }

    return counter;
}

void printWordHistrogram(int* arr, size_t size){
    for(int i = 0; i < size; i++){
        printf("%c: ", 'a'+i );
        for(int x = 0; x < arr[i]; x++){
            printf("*");
        }
        printf("\n");
    }
}