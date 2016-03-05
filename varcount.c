#include<stdio.h>
int main()
{
	char str[100],arr[100];
	int i,count=1,j=0,flag=0,k=0;
	printf("enter the string");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65&&str[i]<=90)
		{
			arr[j]=str[i];
			j++;
		}
	}
	arr[j]='\0';
	for(k=1;arr[k]!='\0';k++)
	{
			flag=0;
			for(i=0;i<k;i++)
			{	
				if(arr[i]==arr[k])
				{
					flag=1;
				}
			}
			if(flag==0)
			{
				count++;
			}
	}
	printf("%d",count);
}
