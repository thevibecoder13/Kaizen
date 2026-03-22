#include<stdio.h>

int main(){
    int N;
    int negative = 0;
    printf("Enter the size of the array\n");
    scanf(" %d", &N);

    int arr[N];

    printf("Enter elements:\n");
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    printf("Negative elements are:\n");
    for(int i = 0; i < N; i++){
        if(arr[i] < 0){
            negative++;
        }
    }
    
            printf("%d", negative);
    return 0;
}