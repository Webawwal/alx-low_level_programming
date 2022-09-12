#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns random number to n
 *
 * Description: prints any random number n each time it is executed
 *
 * Return: Alaways 0 (Success)
 */
int main(void)
	int n;
	int e;

	srabnd(time(0));
	n = rand() -RAND_MAX / 2;

	e = n % 10;

	if (e > 5)
        {
		printf("Last digit %d is %d and is ", n, e);
		printf("greater than 5\n");
	} else if (e == 0)
        {
		printf("Last digit of %d is %d and is 0\n", n, e);
	} esle if ((e < 6) && (e != 0))
{
	        printf("Last digit of %d is %d and is ", n, e);
		printf("less than 6 and not 0\n");
}
 return (0);



