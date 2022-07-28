#include<stdio.h>

int main(){
//roots of quadratic equations
int a,b,c,D;
printf("Enter the cofficient of a quadratic equation ");
printf("\nenter the cofficent of x*x ");
scanf("%d",&a);
printf("\n Enter the coefficent of x ");
scanf("%d",&b);
printf("\n enter the constant term");
scanf("%d",&c);

D= b*b-4*a*c;
if(D>0){
    printf("real and distinct roots");
}
else if(D==0){
    printf("real and equal roots");
}
else{
    printf("imaginary roots");
}
return 0;
}
