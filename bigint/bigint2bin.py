from typing import Tuple 

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


def dec2bin(q: str) -> str:

    digs = ""    # result binary string

    while True:
        (q, r, z) = div2(q)

        digs = chr(r + ord('0')) + digs

        if z:
            break

    return '0b' + digs


# main
import sys
b = dec2bin(sys.argv[1])
print(b)

print(bin(int(sys.argv[1])) == b) 

