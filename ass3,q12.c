#include<stdio.h>
int main()
{
 char ch;
 printf("enter a alphabet");
 scanf("%c",&ch);
 if(ch>='A'&&ch<='Z')
    {
        printf("upper case alphabet");
    }
 if(ch>='a'&&ch<='z')
    {
        printf("lower case");
    }




 return 0;
}
