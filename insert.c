#include<stdio.h>
int main()
{
  int a[10],i,size,num,index;
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  scanf("%d",&num);
  scanf("%d",&index);
  for(i=size-1;i>=index-1;i--)
  {
    a[i+1]=a[i];
    a[index-1]=num;
  }
  for(i=0;i<size+1;i++)
  {
    printf("\n%d",a[i]);
  }
  return 0;

}
