#include <stdio.h>

/**
* main - program that prints the numbers from 1 to 100.
* @Fizz: Fizz is printing instead of multiples of three.
* @Buzz: Buzz is printing instead of multiples of five.
* @FizzBuzz: FizzBuzz is printing instead of multiples of both three
* and five.
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%i", i);
if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
