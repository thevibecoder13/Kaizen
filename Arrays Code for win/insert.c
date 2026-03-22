#include<stdio.h>

int main(){
    int n, pos, element;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];  // extra space

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    // Shift elements to right
    for(int i = n; i > pos; i--){
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = element;

    n++;  // increase size

    // Print updated array
    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}