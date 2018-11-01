#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	char c;
	printf("Enter a character:");
	c = getchar();
	if (c>=97)
	{
		printf("%c\n", c-32);
	}
	else
	{
		printf("%c\n", c+32);
	}
		

	system("Pause");
	return 0;
}
