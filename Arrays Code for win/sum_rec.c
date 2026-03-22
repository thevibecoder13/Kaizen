#include<stdio.h>
int sum(int arr[], int num);
int main(){
    int i, n, a;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int arr [n];
    printf("Enter the %d elements\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    a = sum(arr, n);
    printf("%d", a);
    return 0;
}
int sum(int arr[], int num){
    if ( num == 0)
        return 0;
    return arr[num - 1] + sum(arr, num-1);   
}
