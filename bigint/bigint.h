
typedef unsigned char byte;

typedef struct {
   byte *digits;   // array of digits;
   int n;          // length of the array of digits 
} BigInt;


// make_int allocates memory for the big integer
// it is the job of the caller to free it when 
// done using it.
extern BigInt * make_int(const char *s);

extern void print_int(const BigInt *b);

extern BigInt *add(const BigInt *x, const BigInt *y);
