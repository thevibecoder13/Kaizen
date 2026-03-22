#include<stdio.h>

int main()
{
    int n;
    int s;
    int i = 0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter values of elements:\n");

    while(i < n)
    {
        scanf("%d",&arr[i]);
        i++;
    }

    i = 0;   // reset for second loop

    while(i < n)
    {
        if(arr[i] < 9)
        {
            s = arr[i];
            printf("Alert triggered at value: %d\n", s);
        }
        i++;
    }

    return 0;
}