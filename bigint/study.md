# BigInt Study Questions

## bigint.c - _The base ten version_
1. Modify `print_int` so that it does not print leading zero digits.

2. Write a function `div10` that takes a `BigInt` object and 
   divides it by ten returning the result. _Hint: dividing a base 
   ten integer by ten is the same thing as ... ?_
    - `div10` should not modify the argument passed to it. It should 
       allocate and return a new `BigInt`.
    - `extern BigInt *div10(const BigInt *x);`

3. Write a function `mul10` that takes a `BigInt` object and multiplies it by 
   ten and returns the result. _Hint: Multiplying a base ten integer 
   is the same thing as ... ?_
    - `mul10` should not modify the argument passed to it. 
      It should allocate a new `BigInt` object and return it.
    - `extern BigInt *mul10(const BigInt *x);`

4. Write a function `mult` that multiplies two `BigInt` objects. 
   _Hint: This should use a similar algorithm as the one we developed 
   for multiplying two binary numbers._
    - Make sure that `mult` does not have a memory leak.
    - `extern BigInt *mult(const BigInt *x, const BigInt *y);`

## `bigint2.c` - _The base 256 version_

1. In `bigint2.c` modify the `make_int` function to work when the input 
   string has an odd length of hex digits.
2. In `bigint2.c` complete the `print_hex` function. `print_hex` 
   should not print leading 0 digits.
    - add tests to `main.c` to make sure both of the above functions work.
3. In `bigint2.c` Write a function `add` that takes two `BigInt` objects 
    and adds them. That is, implement the `add` function in `bigint.h`

## Base conversion on `BigInt` objects

_Depending on how far we get this week, this section is a placeholder for some questions on converting big integers between bases._
