#include<stdio.h>
#include<string.h>
struct std_info
{
	int id,mark;
	char name[20];
};
int main()
{
	struct std_info a[4];
	int temp;
	int n=0,i=0,j=0;
	for(i=0;i<3;i++)
	{
	printf("\nenter a name of students %d: ",i+1);
	scanf("%s",&a[i].name);
	fflush(stdin);
	printf("enter a id of students %d: ",i+1);
	scanf("%d",&a[i].id);
	printf("enter a marks of students %d: ",i+1);
	scanf("%d",&a[i].mark);
	}
	int gt=0,lw=999;
	for(i=0;i<3;i++)
	{
		if(a[i].mark>gt)
		{
			gt=a[i].mark;
		}
		if(a[i].mark<lw)
		{
			lw=a[i].mark;
		}
	}
	printf("\n HIGHEST MARK=%d \n LOWEST MARK=%d \n",gt,lw);
	printf("\nfor highest and lowest marks:");
	for(i=0;i<3;i++)
	{
		if(a[i].mark==gt)
		{
		   printf("\n NAME=%s \n ID=%d \n MARKS=%d ",a[i].name,a[i].id,a[i].mark);	
		}
		else if(a[i].mark==lw)
		{
			printf("\n NAME=%s \n ID=%d \n MARKS=%d ",a[i].name,a[i].id,a[i].mark);	
		}
		else
		{
			continue;
		}
	}
	int se=0;
	printf("\nenter a id you want to search:");
	scanf("%d",&se);
	fflush(stdin);
	for(i=0;i<3;i++)
	{
		if(se==a[i].id)
		{
			printf("\nNAME=%s \n ID=%d \n MARKS=%d ",a[i].name,a[i].id,a[i].mark);
			break;
		}
		else if(i==1)
		{
			printf("error");
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(a[i].mark>a[j].mark)
			{
				temp=a[i].mark;
				a[i].mark=a[j].mark;
				a[j].mark=temp;
			}
		}
	}
	printf("\nascending order of marks is : ");
	for(i=0;i<3;i++)
	{
		printf("\n%d",a[i].mark);
	}
	return 0;
}