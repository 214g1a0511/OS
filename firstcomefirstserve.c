#include<stdio.h>
#include<conio.h>
main(){
	int n,i,bt[20],wt[20],tat[20];
	float wtavg,tatavg;
	printf("\nEnter the number of processes-- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the burst time for process %d-- ",i);
		scanf("%d",&bt[i]);
	}
	wt[1]=wtavg=0;
	tat[1]=tatavg=bt[1];
	for(i=2;i<=n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
		tat[i]=tat[i-1]+bt[i];
		wtavg+=wt[i];
		tatavg+=tat[i];
	}
	printf("\nPROCESS\tBURST TIME\tWAITING TIME\tTURNAROUND TIME\n");
	for(i=1;i<=n;i++)
	{
		printf("\nP%d\t\t%d\t\t%d\t\t%d\n",i,bt[i],wt[i],tat[i]);
	}
	printf("\nAverage waiting time -- %f",wtavg/n);
	printf("\nAverage turnaround time -- %f",tatavg/n);
}
