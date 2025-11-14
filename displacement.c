#include<stdio.h>
void main()
{
	int u,a,t;
	float s;
	printf("enter values of u,a,t");
	scanf("%d%d%D",&u,&a,&t);
	s=u*t+0.5*(a*t*t);
	printf("displacement is %f",s);
}
