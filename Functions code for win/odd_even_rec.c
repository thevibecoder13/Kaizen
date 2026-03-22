#include<stdio.h>
void printevenodd (int cur, int upp);
int main(){
        int a, b;
        printf("give the current limit\n");
        scanf(" %d", &a);
        printf("give the upper limit\n");
        scanf(" %d", &b);
        printf("Even and odd numbers from %d to %d are: ", a,b);
        printevenodd (a, b);
        return 0;
}
void printevenodd (int cur, int upp){
    if (cur > upp)
        return;
    printf(" %d", cur);
    printevenodd (cur + 2, upp);
}