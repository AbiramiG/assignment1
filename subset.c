#include <stdio.h>
int main(void)
{
    int s[10],i,j,n,lt,m,n1;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    printf("the elements are\n");
    for(i=0;i<n;i++)
    {
       printf("%d\n",s[i]);
    }
    for(i=2;i<=n;i++)
    {
      for(j=0;j<=n-i;j++)
      {
           lt=j+i-1;
           for(m=lt;m<n;m++)
           {
               for(n1=j;n1<lt;n1++)
               {
                    printf("%d ",s[n1]);
               }
                 printf("%d\n",s[m]);
           }
      }
    }
    return 0;
}
