#include<stdio.h>
int isArm(int n);
void printArm(int ll, int ul);
int main(){
    int ll, ul;
    printf("Enter the lower limit and upper limit\n");
    scanf("%d %d", &ll, &ul);
    printArm(ll,ul);
    return 0;
}
void printArm(int ll, int ul)
{
    printf("All Armstrong number between %d to %d are: ", ll, ul);
    
    while(ll <= ul)
    {
        if(isArm(ll))
        {
            printf("%d", ll);
        }
        
        ll++;
    }
}
int isArm(int n){
    int temp = n, sum = 0, digits = 0, r;

    while(temp != 0){
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp != 0){
        r = temp % 10;
        sum += r * r * r;
        temp /= 10;
    }

    return (sum == n);
}