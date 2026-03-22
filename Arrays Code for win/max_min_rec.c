#include<stdio.h>
int findmax(int arr[], int n);
int findmin(int arr[], int n);
int main(){
    int a;
    printf("Enter the size of the array\n");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements of the array\n");
    for (int i = 0; i < a; i++){
        scanf("%d", &arr[i]);
    }
    int max = findmax(arr,a);
    int min = findmin(arr,a);
    printf("Printing the maximum and negative numbers\n");
    printf("%d %d", max, min);
    return 0;
}
int findmax(int arr[], int n){
    if ( n == 1 ){
        return arr[0];
    }
    int max_rest = findmax(arr,n-1);
    if (arr[n-1] > max_rest)
        return arr[n-1];
    else
        return max_rest;
}
int findmin(int arr[], int n){
     if ( n == 1 ){
        return arr[0];
    }
    int min_rest = findmin(arr,n-1);
    if (arr[n-1] < min_rest)
        return arr[n-1];
    else 
        return min_rest;
}