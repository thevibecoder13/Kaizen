#include <stdio.h>

#define MAX_SIZE 1000

void findSecondMax(int arr[], int size, int index, int *max1, int *max2)
{
    if (index == size)
        return;

    if (arr[index] > *max1)
    {
        *max2 = *max1;
        *max1 = arr[index];
    }
    else if (arr[index] > *max2 && arr[index] != *max1)
    {
        *max2 = arr[index];
    }

    findSecondMax(arr, size, index + 1, max1, max2);
}

int main()
{
    int arr[MAX_SIZE], size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max1 = arr[0];
    int max2 = arr[0];

    findSecondMax(arr, size, 1, &max1, &max2);

    if (max1 == max2)
        printf("No second largest element\n");
    else
    {
        printf("First largest = %d\n", max1);
        printf("Second largest = %d\n", max2);
    }

    return 0;
}