#include<stdio.h>
void main()
{
	int a[100],n,i;
	printf("enter the values of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",a[i]);
	}
	printf("the array values are n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}