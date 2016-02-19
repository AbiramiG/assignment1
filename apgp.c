#include<stdio.h>
int main()
{
	int s,diff,i=0,num,ap,gp;
	char type[5];
	printf("enter the no of term\n");
	scanf("%d",&num);
	printf("enter the start\n");
	scanf("%d",&s);
	printf("enter the diff\n");
	scanf("%d",&diff);
	printf("enter the type");
	scanf("%s",type);
	switch(type[0])
	{
		case 'a':
		for(i=1;i<=num;i++)
		{
			printf("%d\t",s);
			s=s+diff;	
		}
		break;
		case 'g':
		for(i=1;i<=num;i++)
		{
			printf("%d\t",s);
			s=s*diff;
		}
		break;
	}
return 0;
}
