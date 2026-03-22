#include <stdio.h>

int main()
{
    char str[100];
    char mode[20];
    float wheels[10];

    int i = 4; // skip cmd:
    int j = 0;
    int k = 0;

    int range = 0;

    scanf("%s", str);

    // Extract mode
    while(str[i] != ',')
        mode[j++] = str[i++];
    mode[j] = '\0';
    i++;

    // Extract range
    while(str[i] != ',')
        range = range*10 + (str[i++] - '0');
    i++;

    // Extract wheel values
    while(str[i] != '\0')
    {
        int sign = 1;
        int intPart = 0;
        float fracPart = 0;
        float divisor = 1;

        if(str[i] == '-')
        {
            sign = -1;
            i++;
        }

        while(str[i] != '.' && str[i] != ',' && str[i] != '\0')
        {
            intPart = intPart*10 + (str[i++]-'0');
            //i++;
        }

        if(str[i] == '.')
        {
            i++;

            while(str[i] != ',' && str[i] != '\0')
            {
                fracPart = fracPart*10 + (str[i]-'0');
                divisor *= 10;
                i++;
            }
        }

        wheels[k++] = sign * (intPart + fracPart/divisor);

        if(str[i] == ',')
            i++;
    }

    printf("Mode: %s\n", mode);
    printf("Range: %d\n", range);

    printf("Wheel values:\n");
    for(int m = 0; m < k; m++)
        printf("%f ", wheels[m]);

    return 0;
}