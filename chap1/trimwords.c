#include "stdio.h"
#include "stdlib.h"

int getLine(char* line, int maxchars);
int len(char* arr);
void copy(char* target, char* source);
void printarr(char* target, int size);
char* trim(char arr[], int size);

#define MAX_LINE_SIZE 1000
#define MIN_LINE_SIZE 10

int main(void){
    int size = 0;
    char line[MAX_LINE_SIZE];

    while((size = getLine(line, MAX_LINE_SIZE)) > 0){
            char* trimed = trim(line, size); // a pointer is 8 bits (64 bits)
            printf("old: %lu, new: %lu", sizeof(line), len(trimed) * sizeof(char));
            printf("%c",'\n');
            printarr(trimed, len(trimed));
            printf("%c",'\n');
    }

    return EXIT_SUCCESS;
}

int len(char *arr){
    int i = 0;

    while(arr[i] != '\0'){
        i++;
    }

    return i;
}

int getLine(char* line, int maxchars){
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

char* trim(char arr[], int size){
    char* newarr = malloc(size * sizeof(char));
    int i = 0;
    int insideWord = 0;

    while(i < size && !insideWord){
        if(arr[i] == ' ' || arr[i] == '\t'){
            i++;
            continue;
        }
        insideWord = 1;
    }

    int offset = i;
    i = 0;
    while(i+offset < size){
        newarr[i] = arr[i+offset];
        i++;
    }

    // shrink if possible
    if(i < size){
        newarr = realloc(newarr, i * sizeof(char));
    }

    return newarr;
}