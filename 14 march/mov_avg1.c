#include <stdio.h>

int main()
{
    int N;
    printf("Enter window size: ");
    scanf("%d", &N);

    int arr[N];
    int i = 0;
    float sum = 0;
    float value;

    while (1)
    {
        printf("Enter sensor value: ");
        scanf("%f", &value);

        if (i < N)
        {
            arr[i] = value;
            sum += value;

            printf("Moving average = %.2f\n", sum / (i + 1));
        }
        else
        {
            sum -= arr[i % N];
            arr[i % N] = value;
            sum += value;

            printf("Moving average = %.2f\n", sum / N);
        }

        i++;
    }

    return 0;
}