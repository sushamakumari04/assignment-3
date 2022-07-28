#include<stdio.h>
int main(){
int a;
printf("enter a number: ");
scanf("%d",&a);
if(a==100){
  printf("%d is a 3 digit number",a);
}
else if(a==999){
    printf("%d is a 3 digit number",a);
}
else if (100<a&&a<999){
    printf("%d is a 3 digit number",a);
}
else{
    printf("%d is not a 3 digit number",a);
}

return 0;
}
