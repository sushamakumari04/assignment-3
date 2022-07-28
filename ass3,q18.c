include<stdio.h>
int main()
{
int n;
printf("enter the month number");
scanf("%d",&n);

if(n==1||n==3||n==5||n==7||n==8||n==10||n=12)
{
 printf("31 days in %d month",n);
}
else if(n==2)
{
 printf("28 days in %d month",n);
}
else
{
 printf("30 days in %d month",n);
}

return 0;
}
