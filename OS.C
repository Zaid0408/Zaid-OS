#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
       int n,awt=0,i,j,atat=0;
       int bt[10],wt[10],tat[10],at[10];
       printf("Enter the number of Processes\n");
       scanf("%d",&n);
       printf("Enter the burst time of each process:");
       for(i=0;i<n;i++)
       {
		printf("\nP: %d",(i+1));
		scanf("%d",&bt[i]);

       }

       wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=0;
		for(j=0;j<i;j++){
			wt[i]+=bt[j];

		}

	}
       printf("\nProceses\tBurst Time\tWaiting Time\tTurn around time");
       for(i=0;i<n;i++){
		tat[i]=bt[i]+wt[i];
		awt+=wt[i];
		atat+=tat[i];
		printf("\nP%d\t\t",(i+1));
		printf("%d\t\t",bt[i]);
		printf("%d\t\t",wt[i]);
		printf("%d\t",tat[i]);

       }
       awt=awt/n;
       atat=atat/n;
       printf("\nAverage waiting time is %d and Average turn around time is %d\n",awt,atat);
       return 0;
}