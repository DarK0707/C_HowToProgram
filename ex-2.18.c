//
// Created by sezerdev on 5/6/24.
//
//Comparing Integers

#include <stdio.h>

int main() {

    int num1, num2 ;

    printf("Please enter 2 integers :\n");
    scanf("%d %d",&num1, &num2);

    if(num1 > num2) {
        printf("%d is larger\n",num1);
    }
    if(num1 == num2 ) {
        printf("%d and %d are equal\n", num1, num2);

    }
    if(num1< num2) {
        printf("%d is larger\n", num2);
    }
}