//
// Created by sezerdev on 5/6/24.
//

#include <stdio.h>

/*
 *
  Write a single C statement to accomplish each of the following:
   a) Define the variable number to be of type int and initialize it to 0.

   b) Prompt the user to enter an integer. End your prompting message with a co-
   lon (:) followed by a space and leave the cursor positioned after the space.

   c) Read an integer from the keyboard and store the value in integer variable a.

   d) If number is not equal to 7, display "number is not equal to 7."

   e) Display "This is a C program." on one line.

   f) Display "This is a C program." on two lines so the first line ends with C.

   g) Display "This is a C program." with each word on a separate line.

   h) Display "This is a C program." with the words separated by tabs.
 */

int main() {

 int a = 0;

 printf("%s","Enter a integer : ");
 scanf("%d",&a);

 if(a != 7) {
  puts("number is not equal to 7");
 }

 puts("This is a C program");
 puts("This is a C\nprogram");
 puts("This\nis\na\nC\nprogram");

 puts("This\tis\ta\tC\tprogram");


}