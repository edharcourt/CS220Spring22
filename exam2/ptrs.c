#include <stdio.h>
int main() {

    int a, *p, *t;
    p = &a;
    a = 23;
    //*t = 6;
    printf("%d\n", *p); 
    printf("%d\n", *&a); 

}

