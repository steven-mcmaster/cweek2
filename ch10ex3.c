
#include <stdio.h>
#include <sysexits.h>
#include <string.h>
// Should interleave the lines of two files
int main(int argc, char *argv[])
{
	if(argc != 3) {
		fprintf(stderr, "Usage: %s <file1> <file2>\n", argv[0]);
		return EX_USAGE;
	}
/////////////////////
    if(argv[argc-1][0] == "+") {
        for(int i = 0; i <= (strnlen(argv[argc-1], sizeof(argv[argc-1]))); ++i) {
        argv[argc-1][i] = argv[argc-1][i+1];
        }
    }
//////////////////////////
	int ret_code = EX_OK;

	FILE *fp1 = fopen(argv[1], "r");
	if(!fp1) {
		perror("Unable to open file 1");
		ret_code = EX_NOINPUT;
		goto leave;
	}

	FILE *fp2 = fopen(argv[2], "r");
	if(!fp2) {
		perror("Unable to open file 2");
		ret_code = EX_NOINPUT;
		goto fp1_cleanup;
	}
//////////////////////////////////////////////////////////////

print_screen:    
    //if(argv[argc-1][0] == "+") {
        char buf1[128];
        // print lines from the file
        // FILE *stdin
        while(fgets(buf1, sizeof(buf1), fp1)) {
        printf("%s", buf1);
        }
        char buf2[128];
        // print lines from the file
        // FILE *stdin
        while(fgets(buf2, sizeof(buf2), fp2)) {
        printf("%s", buf2);
        }
   // }
//////////////////////////////////////////////////////////////
cleanup:
	if(fclose(fp2)) {
		perror("Unable to close file");
		ret_code = EX_IOERR;
	}
fp1_cleanup:
	if(fclose(fp1)) {
		perror("Unable to close file");
		ret_code = EX_IOERR;
	}
leave:
	return ret_code;
}
