#include <stdio.h>

int main()

{
    
    int number,firstDigit,lastDigit; 
    int sum=0; 

 printf("type any number :- ");
 scanf("%d", &number);
    
    lastDigit = number % 10;
    
    firstDigit = number;

    while(number >= 10)
    
    {
        number = number / 10;
    }
    
    firstDigit = number;

    sum = firstDigit + lastDigit; 

    printf("Sum of first and last digit = %d ", sum);

    return 0;
    
}