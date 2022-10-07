#include <stdio.h>
#include <math.h>

/**
* main - Prints the largest prime factor of 612852475143
*
* @odd: odd numbers
* 
* Return: always 0
*/
int main(void)
{
long int n = 612852475143;
int maxPrime, odd;

while (n % 2 == 0)
{
maxPrime = 2;
n /= 2;
}
for (odd = 3; odd <= sqrt(n); odd += 2)
{
while (n % odd == 0)
{
maxPrime = odd;
n /= odd;
}
}
if (n > 2)
maxPrime = n;
printf("%i\n", maxPrime);
return (0);
}
