#include <stdio.h>

int main()
{
    
int number,t,r = 0, d, digit = 0 ;
printf(" • type a Number: \n");
scanf("%d", &number); 

t = number; 

while (t > 0)

{
d = digit + t % 10; 
t = t / 10;
}

t = d;

printf("\n • The sum of the digits = %d", t);

while (t > 0)

{

r = r * 10 + t % 10;
t = t / 10;
}

printf("\n • The reverse of the digits = %d", r);
printf("\n • The product of %d * %d = %d", digit, r, r * d);

if (r * d == number)

{
printf("\n • %d is a Magic Number. ", number);
}

else

{

printf("\n • %d is not a Magic Number. ", number);

    
}

return 0;
}