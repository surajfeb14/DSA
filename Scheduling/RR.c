//Round Robin Process Scheduling Using c

#include<stdio.h>
int check(int arr[],int n)
{
	for(int a=0;a<n;a++)
	{
		if(arr[a]!=0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int i,tot=0,tc=0,n,tq,rbt[10],bt[10],wt[10]={0},tat[10]={0};
	char id='A';
	printf("Number of Processes : ");
	scanf("%d",&n);
	for(i=0;i<n;i++,id++){
		printf("Burst time of Processes %c : ",id);
		scanf("%d",&bt[i]);
		rbt[i]=bt[i];
	}
	printf("Time Quantum : ");
	scanf("%d",&tq);
	i=0;
	while(check(rbt,n))
	{
		if(rbt[i]>=tq)
		{
			rbt[i]-=tq;
			tc+=tq;
			wt[i]+=tc-tq-tat[i];
			tat[i]=tc;
		}
		else if(rbt[i]<tq && rbt[i]>0)
		{
			tc+=rbt[i];
			wt[i]+=tc-rbt[i]-tat[i];
			rbt[i]-=rbt[i];
			tat[i]=tc;
		}
		if(i==n-1)
		{
			i=-1;
		}
		i++;
	}
	printf("\n-------------------------------------------------------------------------\n");
	printf("\nPID\tBurst Time\tWaiting Time\tTurn Around Time\n\n");
	for(i=0,id='A';i<n;i++,id++)
	{
		printf("%c\t\t%d\t    %d\t\t\t%d\n",id,bt[i],wt[i],tat[i]);
		tot+=wt[i];
	}                               
	printf("\n-------------------------------------------------------------------------\n");
	printf("\nTotal Wating Time : %d (Time Unit)\nAverage Wating Time : %f (Time Unit)\n",tot,(float)tot/n);
	printf("\n-------------------------------------------------------------------------\n");
	
	return 0;	
}