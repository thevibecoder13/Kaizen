#include <stdio.h>

int main()
{
    char curr[20];
    char prev[20];
    int count = 0;
    int same;
    while(1)
    {
        scanf("%s", curr);

        same = 1;
        int i = 0;

        while(curr[i] != '\0' || prev[i] != '\0')
        {
            if(curr[i] != prev[i])
            {
                same = 0;
                break;
            }
            i++;
        }

        if(same)
        {
            count++;
        }
        else
        {
            count = 1;

            int j = 0;
            while(curr[j] != '\0')
            {
                prev[j] = curr[j];
                j++;
            }
            prev[j] = '\0';
        }
        if(count==3)
        {
            printf("Repeated command detected: %s\n", curr);
        }
    }

    return 0;
}