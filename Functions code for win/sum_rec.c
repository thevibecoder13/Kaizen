#include<stdio.h>
int sum_(int start, int end);
int main(){
    int a;
    int b;
    int sum;
    printf("Enter the upper limit\n");
    scanf("%d", &a);
    printf("Enter the limit\n");
    scanf("%d", &b);
sum = sum_(a,b);
printf("%d", sum);
}
int sum_(int start, int end){
        if(start == end){
            return start;
        }
        else{
            return start + sum_(start + 1, end);
        }
}