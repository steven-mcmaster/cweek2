#include <stdio.h>
#include <math.h> 

int main(void)
{
    double m,p,j,n,i;
    p = 200000;
    n = 12 * 30;
    i = 7.5;
    j = i / (12 * 100);
    m = p * ( j / (1 - pow(( 1 + j), -n)));

    printf("%f",m);
}

