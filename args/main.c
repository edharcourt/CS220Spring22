#include <stdio.h>


// argv is an array of command line arguments
int main(int argc, char *argv[]) {
    // printf("%d %s %s\n", argc, argv[0], argv[1]); 


    // loop through command line arguments 
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
}
