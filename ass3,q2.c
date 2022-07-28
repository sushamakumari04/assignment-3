#include<stdio.h>

int main(){
int a,b;
printf("enter a number");
scanf("%d",&a);
b=a%5;
if(b==0){
  printf("%d is divisible by 5",a);
 }
 else{
  printf(" %d not divisible by 5",a);
 }

return 0;
}
