
# Function returns a string of bits in a floating-point number
# assume 0 < f < 1 
def float2bin(f: float) -> str:
    r = ""  # return result

    for i in range(64):
        f = f*2

        if f >= 1:
            r = r + '1'
            f = f - 1
        else:
            r = r + '0'

        if f == 0.0:
            break

    return r

# main program
# double underscore symbols (dunders)
import sys
if __name__ == "__main__":
   print(float2bin(float(sys.argv[1]))) 
