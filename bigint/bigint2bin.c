
/*
def div2(s: str) -> Tuple[str, int, bool]:
    
    q = ""                      # quotient
    r = ord(s[0]) - ord('0')    # r starts as the most significant digit 
    z = True

    for i in range(len(s)):
        p = r//2   # p is the partial quotient

        if p != 0:
            z = False

        q = q + chr(p + ord('0'))   

        # guard against index out of bounds
        if i < len(s) - 1: 
            r = (r - 2*p)*10 + (ord(s[i+1]) - ord('0'))


    r = r - 2*p    # compute final 

    return (q,r,z)
*/

typedef byte unsigned char;

byte div2(char *s, char *q, int *z) {

    int r = s[0] - '0';
    *z = 1;
    int p = 0;

    for (int i = 0; i < strlen(s); i++) {
        p = r/2; 
        if (p != 0)
            *z = 0; 

        *q++ = p + '0';

        if (i < strlen(s) - 1)
            r = (r - 2*p)*10 + (s[i+1] - '0')
    }
    r = r - 2*p;
    *q = 0;  // null terminate q
} 

/* 
def dec2bin(q: str) -> str:

    digs = ""    # result binary string

    while True:
        (q, r, z) = div2(q)

        digs = chr(r + ord('0')) + digs

        if z:
            break

    return '0b' + digs
*/

char *dec2bin(char *s) {
    char *digs = malloc(4*strlen(s) + 1);
    char q[strlen(s) + 1];
    int z = 0;

    while (1) {
        byte r = div2(s, q, &z);
        
    }

}


