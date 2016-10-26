#include <stdio.h>

int main(void) {
    int i = 8;
    int j = 2;
    
    while(--i > 1) {
        j = i;
        while(i > 1 && j) {
            printf("%d",j);
            --j;
        }
        puts("");
    }
    puts("1");
}

