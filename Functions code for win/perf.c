#include<stdio.h>
int isPerfect(int num);
void printPerfect(int ll, int ul);
int main(){
    int ll, ul;
    printf("Enter the lower limit and upper limit\n");
    scanf("%d %d", &ll, &ul);
    printPerfect(ll,ul);
    return 0;
}
void printPerfect(int ll, int ul)
{
    printf("All perfect number between %d to %d are: ", ll, ul);
    
    while(ll <= ul)
    {
        if(isPerfect(ll))
        {
            printf("%d", ll);
        }
        
        ll++;
    }
}
int isPerfect(int num){
    int i, sum = 0;

    for(i = 1; i <= num/2; i++){
        if(num % i == 0){
            sum += i;
        }
    }

    return (sum == num);
}
