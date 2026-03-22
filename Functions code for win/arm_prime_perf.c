#include<stdio.h>
#include<math.h>

int isPrime(int n);
int isArmstrong(int n);
int isPerfect(int n);

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPrime(n))
        printf("Prime number\n");
    else
        printf("Not a prime number\n");

    if(isArmstrong(n))
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    if(isPerfect(n))
        printf("Perfect number\n");
    else
        printf("Not a perfect number\n");

    return 0;
}

int isPrime(int n){
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i <= n/2; i++){
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int isArmstrong(int n){
    int temp = n, sum = 0, digits = 0, r;

    while(temp != 0){
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp != 0){
        r = temp % 10;
        sum += ceil(pow(r, digits));
        temp /= 10;
    }

    return (sum == n);
}

int isPerfect(int n){
    int i, sum = 0;

    for(i = 1; i <= n/2; i++){
        if(n % i == 0){
            sum += i;
        }
    }

    return (sum == n);
}// armstrong no is not reliable here as we r using pow function and that returns double 