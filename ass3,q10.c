#include<stdio.h>
int main()
{

 float profit,loss,cp,sp,p,l;
 printf("Enter the cost price of the product ");
 scanf("%f",&cp);
 printf("Enter the selling price of the product ");
 scanf("%f",&sp);
 if(sp>cp){
 p=sp-cp;
 profit=p/cp*100;
 printf("profit percent is  %f ",profit);
 }
 else{
 l=cp-sp;
 loss=l/cp*100;
 printf("loss percent is %f ",loss);
 }

 return 0;
}
