#include<stdio.h>
void max_min(int a, int b);
int main(){
int a, b;
printf("Enter 2 nos for comparision\n");
scanf("%d %d", &a, &b);
max_min(a,b);
}
void max_min(int a, int b){
    if(a > b){
        printf("Max = %d\n", a);
        printf("Min = %d\n", b);
    }
    else{
        printf("Max = %d\n", b);
        printf("Min = %d\n", a);
    }

}