#include <stdio.h>

long  fact ( long  n );

int main(void)
{
	long  n = 10;
	printf ("%ld \n", fact (n) );
 return 0;
}

long  fact ( long n)
{
	return ( (n == 0 || n == 1) ? 1 : (n * fact (n -1 ) ) ) ;
}
