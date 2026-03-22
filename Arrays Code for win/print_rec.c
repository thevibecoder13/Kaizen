#include<stdio.h>
int printarr(int arr[], int size, int index);
int main(){
    int s,i;
    printf("Enter the size of the array\n");
    scanf("%d", &s);
    int arr[s];
    printf("Enter %d elements: ", s);
    for (i=0; i<s; i++){
        scanf("%d", &arr[i]);
    }
    printarr(arr, s, 0);
    return 0;
}
int printarr(int arr[], int size, int index){
     if (index == size){
        return arr[size];
     }
     else {
        printf("%d", arr[index]);
     }
     return printarr(arr, size, index + 1);
}