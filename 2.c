#include <stdio.h>
#include <stdlib.h>

/* 
5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5
run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int max(int x,int y);
	int i,j,n,t=0,temp1,temp2;
	int a[101][101];
	int sum[101][101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	i=n-1;
	for(j=0;j<=i;j++)
	{
		sum[i][j]=a[i][j];//最后一行的值赋给sum;从后往前累加计算 
	}
	
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			temp1=a[i][j]+sum[i+1][j];
			temp2=a[i][j]+sum[i+1][j+1];
			sum[i][j]=max(temp1,temp2);
		}
	}
	printf("%d",sum[0][0]);
	
	return 0;
}
int max(int x,int y)
{
	if(x>y)
	return x;
	else
	return y;
}
