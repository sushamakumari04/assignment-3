#include<stdio.h>
int main()
{
int a,b,c;
a>0;
b>0;
c>0;
printf("enter the side of triangle\n");
printf("enter the 1st side of riangle");
scanf("%d",&a);
printf("enter the 2nd side of riangle");
scanf("%d",&b);
printf("enter the 3rd side of riangle");
scanf("%d",&c);
if(a+b>c&&b+c>a&&c+a>b)
{
 printf("valid triangle");
}
else{
    printf("not a valid triangle");
}
/*
else if(b+c>a)
{
 printf("%d is valid side",a);
}
else if(c+a>b)
{
    printf("%d is valid sides",b);
}
else
{
 printf("not a valid triangle");
}
*/


return 0;
}
