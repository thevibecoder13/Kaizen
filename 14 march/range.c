#include<stdio.h>
int main(){
int mp_value;
scanf("%d",&mp_value);
if(mp_value>100){
mp_value=100;
}
else if(mp_value<-100)
{
mp_value=-100;
}
printf("%d",mp_value);
return 0;
}