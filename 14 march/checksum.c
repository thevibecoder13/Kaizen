#include <stdio.h>
#include <string.h>

int main()
{
    char pkt[100];
    int nos[20];
    int num = 0, a = 0, sum = 0;

    printf("Enter packet: ");
    scanf("%99s", pkt);

    for(int i = 0; i <= strlen(pkt); i++)
    {
        if(pkt[i] == ',' || pkt[i] == '\0')
        {
            nos[a++] = num;
            num = 0;
        }
        else
        {
            num = num * 10 + (pkt[i] - '0');
        }
    }

    int checksum = nos[a - 1];

    for(int i = 0; i < a - 1; i++)
    {
        sum += nos[i];
    }

    printf("Calculated checksum: %d\n", sum);

    if(sum == checksum)
        printf("Packet Valid\n");
    else
        printf("Packet Invalid\n");

    return 0;
}