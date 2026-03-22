#include <stdio.h>

int main()
{
    FILE *fp;
    int time;
    float temp, pressure;
    int n, i;

    fp = fopen("sensor_log.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be opened\n");
        return 1;
    }

    fprintf(fp, "time,temp,pressure\n");

    printf("Enter number of readings: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter time, temperature, pressure: ");
        scanf("%d %f %f", &time, &temp, &pressure);

        fprintf(fp, "%d,%.1f,%.1f\n", time, temp, pressure);
    }

    fclose(fp);

    printf("Sensor data logged successfully.\n");

    return 0;
}