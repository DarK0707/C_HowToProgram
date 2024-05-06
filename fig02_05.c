//
// Created by sezer on 4.05.2024.
//using if statements ,relational operators , and equality operators.

#include <stdio.h>

//function main begins program execution
int main(void){
    printf("Enter two integer,and I will tell you \n something\n ");

    int number1 = 0;
    int number2 = 0;  //numbers to be read from user

    scanf("%d %d", &number1, &number2); // reads two integer

    if(number1 == number2){
        printf("%d is equal to %d \n", number1, number2);
    } //end if

    if(number1 != number2){
        printf("%d is not equal to %d\n", number1, number2);

    } //end if

    if(number1 > number2){
        printf("%d is greater than %d\n", number1, number2);
    } //end if

    if(number1 < number2){
        printf("%d less than %d\n", number1, number2);
    } //end if

    if(number1 >= number2){
        printf("%d is greater than or equal to %d\n", number1, number2);
    } //end if

    if(number1 <= number2){
        printf("%d is less than or equal to %d\n", number1, number2);
    } //end if
} //end function main



