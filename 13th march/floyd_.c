#include<stdio.h>
int main(){
    int n;
    int num=1;
    printf("enter peak row value");
    scanf("%d",&n);
    for (int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" %d", num);
            num++;
        }
        printf("\n");
    }
   
    for(int i=n-1; i>=1; i--){
        for (int j=1; j<=i; j++){
            printf(" %d", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}