#include <stdio.h>

	int main()
	{
		int number, x, y;
		
		printf("Type in a number \n");
		scanf("%d", &number);
		printf("The number you typed was %d\n", number);
		x = number * number ;
		printf("number * number is %d\n",x);
		return 0;
	}
