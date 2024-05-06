//
// Created by sezerdev on 5/6/24.
//

/*
Write a statement (or comment) to accomplish each of the following:
a) State that a program will calculate the product of three integers.
b) Prompt the user to enter three integers.
c) Define the variable x to be of type int and initialize it to 0.
d) Define the variable y to be of type int and initialize it to 0.
e) Define the variable z to be of type int and initialize it to 0.
f) Read three integers from the keyboard and store them in variables x, y and z.
g) Define the variable result, compute the product of the integers in the vari-
ables x, y and z, and use that product to initialize the variable result.
h) Display "The product is" followed by the value of the int variable result.
 */

#include <stdio.h>

//program will calculate 3 integer

int main() {

 printf("Please enter 3 integer :");

 int x = 0;
 int y = 0;
 int z = 0;
 int result;

 scanf("%d %d %d", &x, &y, &z);

 result = x + y + z;

 printf("The product is %d",result);



}

