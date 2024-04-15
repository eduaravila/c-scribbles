#include <stdio.h>
#include <stdlib.h>


// horizontal histogram (character counter (n max))
// input:
// test
// a
// ab
// abc
// a
// z
// output
// starting from the lowest, * indicate the number of times a word with n chars
// appeared, a word is registered every time ENTER is pressed
// output:
//1: ***
//2: *
//3: *


void printNStars(int n);

#define MAX_HISTOGRAM_SIZE 10

int main(void){
    int input ,currentWordCharCounter;
    input = currentWordCharCounter = 0;
    int counter[MAX_HISTOGRAM_SIZE];

    for(int i = 0; i < MAX_HISTOGRAM_SIZE; i++){
        counter[i]=0;
    }

    while( ( input = getchar() )!= EOF){
        if( input == '\n' ){
            if (currentWordCharCounter < MAX_HISTOGRAM_SIZE){
                counter[currentWordCharCounter]++;
            }
            currentWordCharCounter = 0;

            // prevent, emtpy word char counter increase
            continue;
        }
        currentWordCharCounter++;
    }

    printf("output:\n");
    for(int i = 0; i < MAX_HISTOGRAM_SIZE; i++){
        printf("%d: ", i);
        printNStars(counter[i]);
    }

    return EXIT_SUCCESS;
}

void printNStars(int n){
    for(int i = 0; i<n; i++){
        printf("*");
    }
    printf("\n");
}