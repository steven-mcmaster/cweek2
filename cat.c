#include <stdio.h>
#include <sysexits.h>
int main(int argc,char *argv[]) {
    
    
    if(argc != 2) {
        fprintf(stderr, "NO BAD %s\n", argv[0]);
        return EX_USAGE;
    }
    char buf[256];


    //open the file
    FILE *fp = fopen(argv[1] , "r");
    if(!fp) {
        //fprintf(stderr, "you cant see %s\n", argv[1]);
        perror("Failure!");
        return EX_NOINPUT;
    }
    

    //print the file
        while(fgets(buf, sizeof(buf), fp)) {
            puts(buf);
        }

    //closethefile
    if(fclose(fp)) {
        puts("unable to close file");
        return EX_IOERR;
    }

    
}

