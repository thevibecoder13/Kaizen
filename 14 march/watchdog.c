#include<stdio.h>

int main()
{
    int i;
    int cycle[5];

    for(i = 0; i < 5; i++)
    {
        printf("Enter sensor value: ");
        scanf("%d", &cycle[i]);

        if(cycle[i] == '\0')
        {
            printf("Warning: sensor timeout detected\n");
        }
        else
        {
            printf("Data received\n");
        }
    }

    return 0;
}