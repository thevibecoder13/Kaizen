#include<stdio.h>
void oe (int a);
int main(){
    int a;
printf("Enter no\n");
scanf("%d", &a);
oe(a);
}
void(oe)(int a){
    if(a%2==0){
        printf("even\n");
    }
    else{
            printf("odd\n");
        }
    }