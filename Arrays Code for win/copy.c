#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int source[n], dest[n];
    printf("Enter the elements\n");
    for (int i =0; i<n; i++){
        scanf("%d", &source[i]);
    }
    for (int i =0; i<n; i++){
        dest[i] = source[i];    
    }
    printf("DESTINATION ARRAY\n");
    for (int i =0; i<n; i++){
        printf("%d", dest[i]);
    }
    return 0;
}