#include<stdio.h>

int main()
{
    int N;
    printf("Enter window size: ");
    scanf("%d",&N);

    int arr[N];
    int i = 0;
    int sum = 0;
    float avg;

    while(i < N)
    {
        printf("Enter value: ");
        scanf("%d",&arr[i]);

        sum = sum + arr[i];

        avg = (float)sum/(i+1);

        printf("Moving average = %.2f\n",avg);

        i++;
    }

    return 0;
}