#include<stdio.h>
void main()
{
	int u,a,s;
	float v;
	printf("enter values of u,a,s");
	scanf("%d%d%d",&u,&a,&s);
	v=sqrt((u*u)+(2*a*s));
	printf("final velocity is %f",v);
}
