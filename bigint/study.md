# BigInt Study Questions

## `bigint2.c` - The base 256 version   

1. In `bigint2.c` modify the `make_int` function to work when the input 
   string has an odd length of hex digits.
2. In `bigint2.c` complete the `print_hex` function. `print_hex` 
   should not print leading 0 digits.
    - add tests to `main.c` to make sure both of the above functions work.
3. In `bigint2.c` Write a function `add` that takes two `BigInt` objects 
    and adds them. That is, implement the `add` function in `bigint.h`

## bigint.c    The base ten version
1. Modify `print_int` so that it does not print leading zero digits.

2. Write a function `div10` that takes a BigInt and divides it by ten returning the result. Hint: dividing a base ten integer by ten is the same thing as ... ?
    - `div10` should not modify the argument passed to it. It should 
    allocate and return a new `BigInt`.
    - `extern BigInt *div10(const BigInt *x);`

3. Write a function `mul10` that takes a `BigInt` and multiplies it by 
   ten and returns the result. Hint: Multiplying a base ten integer 
   is the same thing as ... ?
    - `div10` should not modify the argument passed to it. 
      It should allocate a new `BigInt` object and return it.
    - `extern BigInt *mul10(const BigInt *x);`

4.Write a function `mult` that multiplies two `BigInt`s. Hint: This should use a similar algorithm as the one we developed for multiplying two binary numbers.
    - Make sure that `mult` does not have a memory leak.
    - `extern BigInt *mult(const BigInt *x, const BigInt *y);`

## Base conversion on `BigInt`s

Depending on how far we get this week, this section is a placeholder for some questions on converting big integers between bases.
