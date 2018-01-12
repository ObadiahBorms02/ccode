#include<stdio.h>
#run_as_gcc_(filename)-o_squarefunction.c
int square ( int v );

int main( )
{ 
	int x, n ;
	printf ( "\nEnter some number for finding square \n");
	scanf ( "%d", &n) ;
	x = square ( n ) ;
	printf ("number * number is %d\n",n,x );
	printf("\n\n");
	return 0;
}

int square ( int v )	// function definiton
{
	int p ; 
	p = v * v ;
	return ( p ) ;
}
