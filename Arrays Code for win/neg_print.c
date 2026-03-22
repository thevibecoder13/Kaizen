#include<stdio.h>
int main(){
    int N;
    printf("Enter the size of the array");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the %d elements: ", N);
    for (int i =0; i < N; i++){
        scanf("%d", &arr[i]);
        if(arr[i] < 0)
        {
        printf("%d ", arr[i]);
        }
    }
    return 0;
}