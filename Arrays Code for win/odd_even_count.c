#include<stdio.h>
int main(){
    int N, even = 0, odd = 0, i;
    printf("Enter the size of the array\n");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the elements");
    for (i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < N; i++){
        if( arr[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d", even, odd);
    return 0;
}