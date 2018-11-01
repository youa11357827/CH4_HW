#include <stdio.h>
#include <stdlib.h>
long int Fibonacci(int n);

int main(void)
{
	long int n,ans;
	printf("求費氏數列第n項的值\n");
	printf("n=");
	scanf_s("%d", &n);
	ans = Fibonacci(n);

	printf("第%d項的值為%d\n",n,ans);

	system("Pause");

}

long int Fibonacci(int n)

{
	int a[1000],i;
	a[1] = 0;
	a[2] = 1;
	a[3] = 1;
	if (n==1)
	{
		return a[1];
	}
	else if(n==2)
	{
		return a[2];
	}
	else if (n == 3)
	{
		return a[3];
	}
	else
	{
		a[4] = 0;
		for (i = 4; i <= n; i++)
		a[i] = a[i - 1] + a[i - 2];


		return a[n];
	}
	
}


