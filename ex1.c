/******************
Name: Miriam Chavay
ID: 213287790
Assignment: ex1
*******************/
#include <stdio.h>

// REMINDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {

  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */

 int number1, position1, bit_position;
   printf("Please enter a number: \n");
   scanf("%d", &number1);
   printf("please enter a position: \n");
   scanf("%d", &position1);
   /*
    First, we use right shift (>>) as the number of poisition1,
    to get the desired bit on the rightmost side.
    After that, we will isolate the rightmost bit by using the bitwise AND (& 1)
    so that all the other bits are zeroed and only the rightmost bit remains.
   */
    bit_position = (number1 >> position1) & 1;
    printf("The bit in position %d of number %d is: %d\n", position1, number1 ,bit_position);
  
  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

 int number2, position2, bit_on, bit_off;
   printf("Please enter a number: \n");
   scanf("%d", &number2);
   printf("Please enter a position: \n");
   scanf("%d", &position2);
    /*
     First, we use left shift (<<) so the desired bit will be 1.
     Then, we use OR ( | ) to compare the mask with the number we input from the user.
     The result will be a change of the desired bit to 1.
     */
   bit_on = number2 | (1 << position2);
   printf("Number with bit %d set to 1: %d\n", position2, bit_on);
   /*
    First, we repeat the shift operation.
    Next, we use NOT (~) so that the desired bit will be 0.
    After that, we use AND (&) on the mask and the original number
    in order to get 0 in the desired position.
    */
   bit_off = number2 & (~(1 << position2));
   printf("Number with bit %d set to 0: %d\n", position2, bit_off);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */

 int number3, position3, bit_toggle;
   printf("Please enter a number: \n");
   scanf("%d", &number3);
   printf("Please enter a position: \n");
   scanf("%d", &position3);
  /*
   First, we create a mask in which only the bit we want to flip will be 1, and all other bits will be 0.
   Then, we use XOR on the mask and the desired number.
   The specific bit will be flipped, and all other bits will remain unchanged.
   */
   bit_toggle = number3 ^ (1 << position3);
   printf("Number with bit %d toggled: %d\n", position3, bit_toggle);

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */

 int number4, type_of_number;
 printf("Please enter a number: \n");
 scanf("%d", &number4);
 /*
  First, we isolate the most right bit.
  In an odd number - we get 1 and in an even number - we get 0.
  After that, we use bitwise XOR in order to flip them.
  */
 type_of_number = 1^((number4 >> 0) &1);
 printf("%d\n", type_of_number);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

 int number5, number6, sum, bit3, bit5, bit7, bit11;
 // First, we scan two numbers in octal base by using %o.
 printf("Please enter the first number (octal): \n");
 scanf("%o", &number5);
 printf("Please enter the second number (octal): \n");
 scanf("%o", &number6);
 // Now we calculate the sum of the numbers.
 sum = number5 + number6;
 // Then, we print the numbers by using %X for hexadecimal base in capital letters.
 printf("The sum in hexadecimal: %X\n",sum);
 // Now we isolate the specific bit we need in each position by using Shift Right and then bitwise AND.
 bit3 = (sum >> 3) & 1;
 bit5 = (sum >> 5) & 1;
 bit7 = (sum >> 7) & 1;
 bit11 = (sum >> 11) & 1;
 printf("The 3,5,7,11 bits are: %d%d%d%d\n", bit3, bit5, bit7, bit11 );


  printf("Bye!\n");
  
  return 0;
}
