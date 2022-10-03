/* Sample for recursion */

#include <stdio.h>

/* function prototype */

long  fact ( long  n );

/* Driver Program */
int main(void)
{
	long  n = 10;
	printf ("%ld \n", fact (n) );
 	return 0;
}

/* Function Definition */
long  fact ( long n)
{
	return ( (n == 0 || n == 1) ? 1 : (n * fact (n -1 ) ) ) ;
}
