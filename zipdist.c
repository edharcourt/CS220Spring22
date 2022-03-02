/*
 * Read a file of zipcode data and count the number of lines
 */

#include <stdio.h>
#include <string.h>

// preprocessor command
#define ZIPLEN 6    // length of a zipcode including null-terminating byte
#define STATELEN 3
#define CITYLEN 128 

int main(int argc, char *argv[]) {

    char code[ZIPLEN];    // zipcode 
    char state[STATELEN]; // state
    char city[CITYLEN];   // city
    double lng, lat;      // longitude and latitude
    unsigned int lc = 0;  // line counter

    // check if right number of command line
    // arguments specified
    if (argc < 3) {
        printf("Error: no file and/or zipcode specified\n"); 
        return 0;
    }

    char *fname = argv[1];
    char *key   = argv[2]; // the zipcode searching for

    // open the zipcode file in read only mode
    FILE *f = fopen(fname, "r"); 

    // Good propgrams do not crash (run time error), they fail gracefully
    // with a nice error message
    if (f == NULL) {
       printf("Error: file %s not found\n", fname);  
       return 0;       
    }

    while (1) {

       // city - read everything up to the comma
       int rc = fscanf(f, "%5s,%2s,%[^,],%lf,%lf",code,state,city,&lng,&lat);  

       if (rc == EOF) 
           break;

       // check if found key
       /// TODO!!! Use strncmp
       if (strcmp(key,code) == 0) {
           printf("%s, %s, %s, %lf, %lf\n", city, state, code, lng, lat);
           break; 
       }
    }
    
    return 0;
}
