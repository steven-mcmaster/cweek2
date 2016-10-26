#include <stdio.h>

int main(void) {
    int total=0, n=0;
    int nums[100];
    while(n < 101) {
        int i = n;
        while(total < 101) {
            int x = 0;
            if(total == 100) {
                puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                for(int counter = 0; counter < (sizeof(nums)/sizeof(nums[0]));
                 counter++) {
                    if(nums[counter]==0){
                        break;
                    }
                    printf("%d, ",nums[counter]);
                }
                puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
            }
            total += i;
            printf("%d   %d\n",i,total);
            nums[x]=i;
            i++;
        }
        total = 0;
        n++;
    }
}
