#include <stdio.h>

int main (void)
{
    int revX = 0, revY = 0;
	int sum;
	int rev = 0;
	int X, Y;

	scanf("%d %d", &X, &Y);

	while (X > 0)
	{
		revX = (revX * 10) + (X % 10);
		X /= 10;
	}

	while (Y > 0)
	{
		revY = (revY * 10) + (Y % 10);
		Y /= 10;
	}

	sum = revX + revY;

	while (sum > 0)
	{
		rev = (rev * 10) + (sum % 10);
		sum /= 10;
	}

	printf("%d", rev);

    return 0;
}