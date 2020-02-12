#include <stdio.h>
#include <windows.h>
#pragma warning (disable :4996)

void main()
{
	int i, a, b, c;
	for (i = 100; i < 1000; i++)
	{
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;

		if (i == a*a*a + b*b*b + c*c*c)
		{
			printf("%d\i", i);
		}
	}
	system("pause");
	return 0;
}