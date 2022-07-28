#include<stdio.h>
int main()
{
int a,b,c;
printf("enter 3 number\n");
scanf("%d%d%d",&a,&b,&c);
printf(" greater number is %d",a>b ? a>c?a:c : b>c?b:c);


return 0;
}
