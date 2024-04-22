#include <stdio.h>


#define LOWER 0
#define UPER 300 /* lower limit of table */
#define STEP 20  /* step size */

float fartocel(float far);

int main(void){

for(int far = 0; far < UPER; far += STEP){
        float cel = fartocel(far);
        printf("%6d\t%6.1f\n ", far, cel);
    };
}

float fartocel(float far){
    return ( ( far - 32 ) * ( 5.0 / 9.0 ) );
}