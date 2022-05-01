# `BigInt` Study Questions

These are `BigInt` study questions for the final exam. I am 
not going to provide solutions to these.

## `bigint.c` - _The base ten version_
1. Modify `print_int` so that it does not print leading zero digits.

2. Write a function `div10` that takes a `BigInt` object and 
   divides it by ten returning the result. _Hint: dividing a base 
   ten integer by ten is the same thing as ... ?_
    - `div10` should not modify the argument passed to it. It should 
       allocate and return a new `BigInt`.
    - `extern BigInt *div10(const BigInt *x);`
    - Variation: What if I were to ask you to write a version of
      this function that does not allocate additional memory 
      (that is, does not call `malloc`) but modifies
      argument passed to it. How would the code change? Analyze the memory
      usage of this variation. Hint: What if we called `div10` one 
      thousand times on a `BigInt` of five thousand digits.

3. Write a function `mul10` that takes a `BigInt` object and multiplies it by 
   ten and returns the result. _Hint: Multiplying a base ten integer 
   by ten is the same thing as ... ?_
    - `mul10` should not modify the argument passed to it. 
      It should allocate a new `BigInt` object and return it.
    - `extern BigInt *mul10(const BigInt *x);`
    - Variation: What if I were to ask you to write a version of
      this function that does not allocate additional memory 
      (that is, does not call `malloc`) but modifies
      argument passed to it. Is this even possible? How would the code change?
      What if you could call `malloc`.

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

## Testing and Quality Assurance (QA) 
 1. Thoroughly test all of your functions on a variety of inputs. 
    Think of the crer cases.
        - For example, what if I called `div10` on zero?
 2. Convince yourself that none of your functions contain a memory leak.
 3. Add all of the new functions to the header file and give them
   appropriate comments.

## Base conversion on `BigInt` objects

_Depending on how far we get this week, this section is a placeholder for some questions on converting big integers between bases._
