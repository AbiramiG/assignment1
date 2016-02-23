#include<stdio.h>
int inArray(int arr[],int size,int num)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]==num)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int num,i=0,size,arr[20],ret;
	printf("enter the number of elements\n");
	scanf("%d",&size);
	printf("enter the elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element whose index to be searched\n");
	scanf("%d",&num);
	ret=inArray(arr,size,num);
	printf("the index is\t%d\n",ret);
	return 0;
}
