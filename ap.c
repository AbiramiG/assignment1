#include<stdio.h>
int main()
{
	int s,diff,i=0,num,ap;
	printf("enter the start\n");
	scanf("%d",&s);
	printf("enter the no of terms\n");
	scanf("%d",&num);
	printf("enter the diff\n");
	scanf("%d",&diff);
	for(i=1;i<=num;i++)
	{
		ap=s+(i-1)*diff;
		printf("%d\t",ap);
	}
return 0;
}
