#include <stdio.h>
int add(int a,int b,int c)
{
    int s=0;
    s=a+b+c;
    return s;
}

int main()
{
    int a,b,c,sum=0,sum_arr=0,sum_fun=0,i=0;
    int arr[i];
    printf("sum using three variables\n");
    printf("enter the numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    printf("the sum is %d\n",sum);
    printf("the sum using array\n");
    printf("enter the numbers\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
        sum_arr=sum_arr+arr[i];
    }
    printf("the sum is %d\n",sum_arr);
    printf("the sum using function\n");
    sum_fun=add(a,b,c);
    printf("the sum is %d\n",sum_fun);
    return 0;
}
