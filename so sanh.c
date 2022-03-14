#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int b;
	
	printf("nhap a = ");
	scanf("%d", &a);
	fflush(stdin);  
	printf("nhap b = ");
	scanf("%d", &b);
	printf("ket qua so sanh la :\n");
	
	if ( a == b)
	{
		printf("%d bang %d\n", a,b);
	}
	if ( a != b )
	{
		printf(" %d khong bang %d\n", a,b);
	}
	if ( a < b)
	{
		printf(" %d nho hon %d\n", a,b);
	}
	if ( a > b)
	{
		printf(" %d lon hon %d\n", a,b);
	}
	if ( a <= b)
	{
		printf(" %d nho hon hoac bang %d\n", a,b);
	}
	if ( a >= b )
	{
		printf(" %d lon hon hoc bang %d\n", a,b);
	}
	
	return 0;
}
