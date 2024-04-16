#include <stdio.h>

int main(void)
{
    int arr[5];
	int temp;

    for (int l = 0; l < 5; l++)
    {
        scanf("%d", &arr[l]);
    }

    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                
                for (int k = 0; k < 5; k++)
                {
                    printf("%d ", arr[k]);
                }
                printf("\n");
            }
        }
    }
    
    return 0;
}