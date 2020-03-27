#include<stdio.h>
int main()
{
	int arr[30][30],i,j,k;
	printf("enter a matrix");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	k=3;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			arr[i][j]=arr[i][j]+arr[i+k][j];
			
		}
		k-=2;
	}
	k=3;
	for(j=0;j<2;j++)
	{
		for(i=0;i<2;i++)
		{
			arr[i][j]=arr[i][j]+arr[i][j+k];
		}
		k-=2;
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
