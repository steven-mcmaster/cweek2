#include <stdio.h>

int main(void) {

    int i;
    for(i = -4; i <= 4; i++) {
        printf("%d is ", i);
        if(i > 1) {
            printf("positive and ");
        }else if(i < 0) {
            printf("negative and ");
        }
        if(i % 2) {
            puts("odd");
        
        }else {
            puts("even");
        }
    }
}

