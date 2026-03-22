#include<stdio.h>
int cube(int num);
int main(){
    int num;
    int c;
    printf("enter a number\n");
    scanf("%d", &num);
    c=cube(num);
printf("%d", c);
}
int cube (int num){
    return (num * num * num);
}
