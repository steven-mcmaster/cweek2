#include <stdio.h>
#include <sysexits.h>
int main(int argc,char *argv[]) {
    
    int ret_code = EX_OK; 
    
    if(argc != 3) {
        fprintf(stderr, "NO BAD %s\n", argv[0]);
        ret_code = EX_USAGE;
        goto leave;
    }
    char buf[256];


    //open the file
    FILE *fp1 = fopen(argv[1] , "r");
    FILE *fp2 = fopen(argv[2] , "r");
    if(!fp1 || !fp2) {
        //fprintf(stderr, "you cant see %s\n", argv[1]);
        perror("Failure!");
        ret_code = EX_NOINPUT;
        goto cleanup;
    }
    

    //print the file
        while(fgets(buf, sizeof(buf), fp1)) {
            puts(buf);
        }
cleanup:
    //closethefile
    if(fclose(fp2)) {
        puts("unable to close file");
        ret_code = EX_IOERR;
    }

close_fp1:

    if(fclose(fp1)) {
        puts("unable to close file");
        ret_code = EX_IOERR;
leave:
        return ret_code;
    }
}

