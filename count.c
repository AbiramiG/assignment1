#include <stdio.h>
int main()
{
    int num,rem,i=0;
    printf("enter the number\n");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/2;
        i++;
    }
    printf("the count is %d",i);
    return 0;
}
