#include<stdio.h>
int main()
{
int a;
printf("Enter the number : ");
scanf("%d",&a);
if(a%2==0&&a%3==0)
{
 printf("%d is divisible by both 2 and 3 ",a);
}
 else{
    printf("not divisble ");
 }

return 0;
}
