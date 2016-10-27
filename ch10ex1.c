#include <stdio.h>
#include <sysexits.h>
int main(int argc, char *argv[]) {
    
    int ret_code = 0;
    
    if(argc != 3) {
        puts("Please run with 2 cmd line params");
        ret_code = EX_USAGE;
        goto end;
    }
    FILE *fp1 = fopen(argv[1], "r");

    if(!fp1) {
        perror("no file 1");
        ret_code = EX_NOINPUT;
        goto end;
    }
    
    FILE *fp2 = fopen(argv[2], "r");
    if(!fp2) {
        perror("no file 2");
        ret_code = EX_NOINPUT;
        goto close_fp1;
    }
    
    char buf1[100];
    char buf2[100];
file_check:
    while(fgets(buf1, sizeof(buf1), fp1)) {
        while(fgets(buf2, sizeof(buf2), fp2)) {
            if(buf1 == buf2) {
                puts("same");
                goto file_check;
            }
            else {
                puts(buf1);
                puts(buf2);
                goto close_fp2;
            }
        }
    }


close_fp2:
     if(fclose(fp2)) {
         puts("Unable to close file 2");
         ret_code = EX_IOERR;    
     }

close_fp1:
    if(fclose(fp1)) {
        puts("Unable to close file 1");
        ret_code = EX_IOERR;
    }

end:
    return ret_code;
}

