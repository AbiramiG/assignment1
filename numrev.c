#include<stdio.h>
int main()
{
	int i,size,arr[10],mid,j,temp,count=0,n,num;
	printf("enter the number");
	scanf("%d",&num);
	n=num;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	size=count;
	for(i=size-1;i>=0;i--)
	{
		arr[i]=num%10;
		num=num/10;
	}
	if(size%2!=0)
	{
		mid=size/2;
		i=mid-1;
		j=size-1;
		while(i>=0)
		{
			
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				i--;	
				j--;
		}
	}
	else
	{
		mid=size/2;
		i=0;
		j=mid;
		while(i<mid)
		{
			
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				i++;	
				j++;
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
return 0;
}
