#include<stdio.h>
int main(void)
{
	int a;
	int*aptr; // int *aptr;
	aptr=&a; // starting address of a;
	printf("Enter value for a:");
	scanf("%d",aptr);
	printf("address of a: %p %p",&a,aptr);
	printf("\nValue of a: %d %d,a",aptr);
}