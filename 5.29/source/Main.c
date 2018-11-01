#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,i,x;
	printf("請輸入兩個數字:\n");
	scanf_s("%d %d", &a, &b);
	i = 1;
	for (x = 1; x <= 10; x--)
	{
		if (i%a == 0 && i%b == 0)
		{
			printf("%d與%d的最小公倍數是%d", a, b, i);
			break;
		}
		else
		{
			i++;
		}
		
	}
	printf("\n");
	system("Pause");
	return 0;
}
