#include <stdio.h>

int main(void)
{
	int N;
	int arr[1000] = { 0 };
	int temp;
	int M;
	double sum = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	int length = sizeof(arr) / sizeof(int);

	for (int j = 0; j < length - 1; j++)
	{
		for (int k = 0; k < length - 1; k++)
		{
			if (arr[k + 1] > arr[k])
			{
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	}
	M = arr[0];

	for (int l = 0; l < N; l++)
	{
		sum += (double)arr[l] / M * 100;
	}

	printf("%lf\n", sum / N);

	return 0;

}