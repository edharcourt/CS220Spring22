#include <stdio.h>
#include <strings.h>

int main() {

    char *s = "Hello"; // s is a pointer to the first character
    char t[] = "World";
    printf("%s\n", s);  // printd Hello

    printf("%c\n", s[0]);  // print H

    printf("%c %d\n", s[4], s[5]);  // print o O
    
    char word[1024];
    for (int i = 0; i < 1024; i++) {
        word[i] = 0;
    } 
    memset(word, 0, 1024);  // does the same as above loop
    printf("%c\n, word[213]);
}
