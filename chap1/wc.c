#include <stdio.h>
#include <stdlib.h>

// example
// word, word
// w, wwww
// nc = 21, nl=2, nw=4

#define OUT 1
#define IN 0

// nc, nl, nw
// '\n' also count is added in the char count
int main(void)
{

    int input, notWord, nc, nl, nw;
    input = notWord = nc = nl = nw = 0;

    while ((input = getchar()) != EOF)
    {
        // add line
        if (input == '\n')
        {
            nl++;
        }
        if (input == ' ' || input == '\n' || input == '\t')
        {
            notWord = OUT;
        }
        else if (notWord == OUT){
            notWord = IN;
            nw++;
        }

        nc++;
    }

    printf("%d %d %d", nc, nl, nw);

    return EXIT_SUCCESS;
}