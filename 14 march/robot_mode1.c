#include<stdio.h>

int main(){

    char str[100];
    char mode[20];
    float wheels[20];

    int range=0;
    int i=4, j=0, k=0;

    scanf("%s",str);

    // extract mode
    while(str[i]!=','){
        mode[j++] = str[i++];
    }
    mode[j]='\0';
    i++;

    // extract range
    while(str[i]!=','){
        range = range*10 + (str[i++]-'0');
    }
    i++;

    // extract wheels
    while(str[i]!='\0'){

        int sign = 1;
        int intP = 0;
        float fracP = 0;
        float divisor = 1;

        if(str[i]=='-'){
            sign=-1;
            i++;
        }

        while(str[i]!='.' && str[i]!=',' && str[i]!='\0'){
            intP = intP*10 + (str[i++]-'0');
        }

        if(str[i]=='.'){
            i++;
            while(str[i]!=',' && str[i]!='\0'){
                fracP = fracP*10 + (str[i++]-'0');
                divisor*=10;
            }
        }

        wheels[k++] = sign * (intP + fracP/divisor);

        if(str[i]==',')
            i++;
    }

    printf("Mode: %s\n", mode);
    printf("Range: %d\n", range);

    printf("Wheel values:\n");
    for(int m = 0; m < k; m++)
        printf("%f ", wheels[m]);

    return 0;
}