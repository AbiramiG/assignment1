#include<stdio.h>
int main()
{
	int arr[20],i,size,num,flag=0;
	printf("enter the size");
	scanf("%d",&size);
	printf("enter the array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be searched");
	scanf("%d",&num);
	for(i=0;i<size;i++)
	{
		if(arr[i]==num)
		{
			if(arr[i]<arr[i+1])
			{
				printf("%d",i+1);
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		printf("-1");
	}
	return 0;
}
