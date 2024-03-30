#include <stdio.h>
#include <stdlib.h>

// word, word
// w, wwww
// nc = 15, nl=2, nw=4

// nc, nl, nw
int main(void)
{

    int input, inWord, nc, nl, nw;
    input = inWord = nc = nl = nw = 0;

    while ((input = getchar()) != EOF)
    {
        // add line
        if (input != ' ' && input != '\n')
        {
            inWord = 1;
        }
        if ((input == ' ' || input == '\n') && inWord == 1)
        {
            inWord = 0;
            nw++;
        }
        if (input == '\n')
        {
            nl++;
            continue;
        }
        nc++;
    }

    printf("%d %d %d", nc, nl, nw);

    return EXIT_SUCCESS;
}