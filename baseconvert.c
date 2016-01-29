#include <stdio.h>
int convert(int num,int base)
{
   int rem,i=0,j;
   int a[10];
   while(num!=0)
   {
       rem=num%base;
       if(rem>=10)
       {
           a[i]=rem+55;
       }
       else
       {
           a[i]=rem+48;
       }
       num=num/base;
       i++;
   }
    for(j=i-1;j>=0;--j)
    {
        printf("%c",a[j]);
    }
}    
int main()
{
    int num,base;
    printf("enter the number");
    scanf("%d",&num);
    printf("enter the base");
    scanf("%d",&base);
    convert(num,base);
    return 0;
}
