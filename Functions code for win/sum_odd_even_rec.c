#include<stdio.h>
int sumEvenOdd (int s, int e);
int main(){
    int a;
    int b;
    int sum;
    printf("Enter the lower limit\n");
    scanf("%d", &a);
    printf("Enter the upper limit\n");
    scanf("%d", &b);
    sum = sumEvenOdd(a,b);
    printf("%d", sum);
}
int sumEvenOdd (int s, int e){
    if(s == e){
        return s;
    }
    else{
        return s + sumEvenOdd(s+2, e);
    }
}