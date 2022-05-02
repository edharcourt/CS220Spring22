from typing import Tuple 

def div2(s: str) -> Tuple[str, int]:
    
    q = ""                      # quotient
    r = ord(s[0]) - ord('0')    # r starts as the most significant digit 

    for i in range(len(s)):
        p = r//2   # p is the partial quotient

        q = q + chr(p + ord('0'))   

        # guard against index out of bounds
        if i < len(s) - 1: 
            r = (r - 2*p)*10 + (ord(s[i+1]) - ord('0'))


    r = r - 2*p    # compute final 

    return (q,r)


def dec2bin(q: str) -> str:

    # finish on Wednesday


print(div2("365"))

