#include<stdio.h>
int main(){

int a,b;
printf("enter first  number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
if(a>b)
{
 printf("greater number is %d",a);
}
else if(b>a)
{
printf("greater number is %d ",b);
}
else{
    printf("both number are equal that is %d",a);
}


return 0;
}
