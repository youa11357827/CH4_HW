#include <stdio.h>
#include <stdlib.h>
long int recursive(int a,int b);

int main(void)
{
	long int a, b, c;
	printf("求a的b次方\n");
	printf("a=");
	scanf_s("%d", &a);
	printf("b=");
	scanf_s("%d", &b);

	c = recursive(a,b);
	
	printf("%d的%d次方=%d\n", a, b, c);
	
	system("Pause");

}

long int recursive(int a,int b)
{
	if (b == 0)
		return 1;
	if (b == 1)
		return a;
	else
		return (a*recursive(a, b - 1));
}


