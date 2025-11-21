//Perform Addition of Two Matrices
#include<stdio.h>
int main(void)
{
	int A[20][20], B[20][20], C[20][20], i,j,rows,cols;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	printf("\nEnter the number of columns:");
	scanf("%d",&cols);
	
	//Reading A[rows][cols]
	printf("Enter the values for A[%d][%d]:\n",rows,cols);
	for(i=0;i<rows;i++)
	   for(j=0;j<cols;j++)
	     scanf("%d",&A[i][j]);
	     
    //Reading B[rows][cols]
	printf("Enter the values for B[%d][%d]:\n",rows,cols);
	for(i=0;i<rows;i++)
	   for(j=0;j<cols;j++)
	     scanf("%d",&B[i][j]);
	     
    //Perform Addition
    for(i=0;i<rows;i++)
      for(j=0;j<cols;j++)
        C[i][j]= A[i][j]+ B[i][j];
        
    //Display the Resultant Matrix
    printf("\nResultant Matrix C[%d][%d]:\n",rows,cols);
	for(i-0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		   printf("%d",C[i][j]);
		printf("\n");
	}
		 
}