#include <stdio.h>

long summation( long n ) ;

int main ( int argc, char * argv[])
{
	long n = 100 ;

	printf ( "%ld \n" , summation (n) ) ;
}

long summation ( long n ) 
{

	return ( (n == 1) ? 1 : (n + summation (n - 1)));
}

