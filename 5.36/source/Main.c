#include <stdio.h>
#include <stdlib.h>
long int hanoi(int n);

int main(void)
{
	long int n, ans;
	printf("�Dn�Ӷ��һݷh��������\n");
	printf("n=");
	scanf_s("%d", &n);
	ans = hanoi(n);

	printf("%d�Ӷ��ݭn%d��\n", n, ans);

	system("Pause");

}

long int hanoi(int n)

{
	int a[1000], i;
	a[1] = 1;
	for ( i = 2; i <= n; i++)
	{
		a[i] = 2 * a[i - 1] + 1;
	}


		return a[n];
	


}


