#include<stdio.h>
int main()
{
int a;
printf("Enter the number : ");
scanf("%d",&a);
if(a%7==0||a%3==0)
{
 printf("%d is divisible 3 or 7 ",a);
}
else{
    printf("not divisible");
}

return 0;
}
