#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,m,safe;
	printf("Enter the number of process and resources respectively:\n");
	scanf("%d",&n);
	scanf("%d",&m);
	int max[n][m],alloc[n][m],need[n][m];
	int f[n],ans[n];
	printf("For allocation:\n");
	for(int i=0;i<n;i++)
	{
		printf("Enter the given resource to the process P%d\n",i);
		for(int j=0;j<m;j++)
		{
			printf("R[%d]: ",j);
			scanf("%d",&alloc[i][j]);
		}
	}
	printf("For Max:\n");
	for(int i=0;i<n;i++)
	{
		printf("Enter the given resource to the process P%d\n",i);
		for(int j=0;j<m;j++)
		{
			printf("R[%d]: ",j);
			scanf("%d",&alloc[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			need[i][j]=max[i][j]-alloc[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		f[i]=0;
	}
	int avail[m];
	printf("Enter the available resource\n");
	for(int j=0;j<m;j++)
	{
		printf("R%d",j);
		scanf("%d",&avail[j]);
	}
	for(int k=0;k<3;k++)
	{
		for(int i=0;i<n;i++)
		{
			if(f[i]==0)
			{
				 int flag=0;
				 for(int j=0;j<m;j++)
				 {
					if(need[i][j]>avail[j])
					{
						flag=1;
						break;
					}
				 }
				 if(flag==0)
				 {
					ans[safe++]=i;
					f[i]=1;
					for(int j=0;j<m;j++)
					{
						avail[j] += need[i][j];
					}
				 }
			}
		}

	}




}