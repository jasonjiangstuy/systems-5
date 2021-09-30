#include "stdio.h"

int main() {
  // Declare and initialize variables of types char, int, and long.
  char char_var = 'a';
  int int_var = 10;
  long long_var = 999;

  // Print out the addresses of each variable in hex and decimal.

  // Do you notice anything about the addresses?
  // char addresses are odd
  printf("Char Var: %p \n", &char_var);
  printf("Int Var: %p \n", &int_var);
  printf("Long Var: %p \n", &long_var);

  // Declare and initialize pointers for each of your variables.
  char *char_point = &char_var;
  int *int_point = &int_var;
  long *long_point = &long_var;

  // Print out the values of each pointer.
  printf("Char Pointer: %p \n", char_point);
  printf("Int Pointer: %p \n", int_point);
  printf("Long Pointer: %p \n", long_point);

  // Use the pointers to modify the values of the original variables and print out the new values.
  *char_point = 'b';
  *int_point = 11;
  *long_point = 1000;

  printf("Char Pointer: %c \n", *char_point);
  printf("Int Pointer: %d \n", *int_point);
  printf("Long Pointer: %ld \n", *long_point);

  // Declare and initialize an unsigned int variable and 2 pointers that point to it, one should be an int * and the other should be a char *
  unsigned int unsign_int = 1;
  int *unsign_point_int = &unsign_int;
  char *unsign_point_char = &unsign_int;

  // Print out the value of each pointer (this should be the memory address), and de-reference each pointer to print out the value each points to.
  // The output should look something like: p: 0x7ffee3dbd938 p points to: 133.
  printf("int_point: %p point to: %d \n", unsign_point_int, *unsign_point_int);
  printf("char_point: %p points to: %c \n", unsign_point_char, *unsign_point_char);
  // Print out your unsigned int in decimal and hex.
  // The printf formatting character for a hexadecimal int is: %x
  // The printf formatting character for an unsigned int is: %u
  printf("int_point in decimal: %ld \n", unsign_point_int, *unsign_point_int);
  printf("int_point in hex: %u \n", unsign_point_int, *unsign_point_int);

  // Use the char * to print out each individual byte of your unsigned int
  int pointer =0;
  for (pointer=0; pointer < 4; pointer++){
    printf("byte %d of unsigned int: %d \n", pointer, *(unsign_point_int + pointer));
  }
  // The printf formatting character for a single byte in hex is %hhu for unsigned decimal integer
  // and hhx for an unsigned hex, (that is half of half of an integer).
  // Use the char * to increment each byte of the unsigned int by 1. Print out the unsigned int in both hex and decimal after each modification. When done, print out each byte like in step 9. You may need to reset the char * so that it points to the unsigned int, depending on how you wrote step 4 out.
  for (pointer=0; pointer < 4; pointer++){
    printf("byte %d of unsigned int in hex form: %hhu \n", pointer, *(unsign_point_int + pointer));
    printf("byte %d of unsigned int in hex form: %ld \n", pointer, *(unsign_point_int + pointer));

  }

  // Perform the same operation as in step 10, except add 16 to each byte.
  for (pointer=0; pointer < 4; pointer++){
    *(unsign_point_int + pointer) += 16;
    printf("byte %d of unsigned int in dece form PLUS 16: %hhu \n", pointer, *(unsign_point_int + pointer) );
    printf("byte %d of unsigned int in hex form PLUS 16: %ld \n", pointer, *(unsign_point_int + pointer));

  }

  // As you go through this, look at what’s happening to each byte, and think about the level of control you have over the memory space used by your program.

  //What values did you see for each individual byte? Can you make sense of them? Does the order make sense?
// The value of the byte plus 16
//

  return 0;
}

// If you want to test things further try doing all the above with different kinds of values:
// Try an unsigned int with a value greater that 2.1 billion.
// Try a regular int.
