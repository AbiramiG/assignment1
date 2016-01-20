#include <stdio.h>
int main()
{
    int r,c,ms[15][15]={0},n,num;
    printf("This method works only for odd order matrix\n");
    printf("Enter the order of the matrix\n");
    scanf("%d",&n);
    r=0;
    c=0;
    for(num=1;num<=(n*n);++num)
    {
        if(ms[r][c]==0)
        {
        ms[r][c]=num;
        }
        r--;
        c++;
        if(num%n==0)
        {
           r=r+2;
           c=c--;
        }
        if(c==n)
        {
           c=0;
        }
        if(r<0)
        {
            r=r+n;
        }
        else if(ms[r][c]!=0)
        {
            r=r+2;
            c=c-1;
            ms[r][c]=num;
        }
    }
    printf("\nthe required magic square is\n");
    for(r=0;r<n;r++)
    {
      for(c=0;c<n;c++)
      {
          printf("%d\t",ms[r][c]);
      }
      printf("\n");
    }
    return 0;
}
