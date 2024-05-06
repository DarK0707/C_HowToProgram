//
// Created by sezerdev on 5/6/24.
//
// Arithmetic, Largest Value and Smallest Value
#include <stdio.h>

int main() {

    int a, b, c;


    printf("Enter 3 different integers :");
    scanf("%d %d %d", &a, &b, &c);

    int sum, average, product;
    sum = a+ b+ c;
    average =sum/3;
    product = a* b* c;


    printf("The sum is :%d\n",sum);
    printf("The average is :%d\n",average);
    printf("The product is :%d\n",product);
    if(a<b && a<c) {
        printf("Smallest number is : %d\n",a);

    }
    if(b<a && b<c) {
        printf("Smallest number is : %d\n",b);
    }

    if(c<a && c<b) {
        printf("Smallest number is : %d\n",c);

    }

    if(a>b && a>c) {
        printf("Largest number is : %d\n",a);

    }
    if(b>a && b>c) {
        printf("Largest number is : %d\n",b);
    }


    if(c>a && c>b) {
        printf("Largest number is : %d\n",c);
    }


}
