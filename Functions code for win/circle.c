#include<stdio.h>
float area (float n);
float dia (float n);
float crc (float n);
int main(){
    float n;
    float a,d,c;
    scanf("%f",&n);
    a = area(n);
    d = dia(n);
    c = crc(n);
    printf("%f %f %f", a,d,c);
    return 0;
}
float area (float n){
    return (3.14 * n * n);
}
float dia (float n){
    return ( 2*n);
}
float crc (float n){
    return (2*3.14*n);
}
