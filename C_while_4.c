#include <stdio.h>

int main(void)
{
	double a = 1;

	while (a < 2)
	{
		printf("%lf\n", a);
		a += 0.1;
	}

	return 0;
}