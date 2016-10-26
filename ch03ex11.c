#include <stdio.h>

int main(void) {
        int sum = 1, i = 1;
        while(i < 10) {
            sum += i*sum;
            i++;
        }
    printf("%d",sum);
}

