#include <stdio.h>

typedef struct process
{
	//priority-> Priority, b-> burst, t-> turn around, w-> wating
	int priority,btime,ttime,wtime; 
	char pid;
}p;

int main()
{
	int i,j,k,n,tot=0;
	char id='A';
	p arr[10],temp;
	
	printf("How many Processes are there? : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the Burst Time of Process %c : ",id);
		scanf("%d",&arr[i].btime);
		printf("\nPRIORITY of %c : ",id);
		scanf("%d",&arr[i].priority);
		arr[i].pid=id;
		id++;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i].priority>arr[j].priority)
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			arr[i].wtime=0;
			arr[i].ttime=arr[i].btime;
		}
		else
		{
			arr[i].wtime=arr[i-1].ttime;
			arr[i].ttime=arr[i].wtime+arr[i].btime;
		}
		tot+=arr[i].wtime;
	}
	
	printf("\n-------------------------------------------------------------------------\n");
	printf("\nPID\t    Priority\tBurst Time\tWaiting Time\tTurn Around Time\n\n");
	for(i=0;i<n;i++)
	{
		printf("%c\t\t%d\t    %d\t\t\t%d\t\t%d\n",arr[i].pid,arr[i].priority,arr[i].btime,arr[i].wtime,arr[i].ttime);
	}
	printf("\n-------------------------------------------------------------------------\n");
	printf("\nTotal Wating Time : %d (Time Unit)\nAverage Wating Time : %d (Time Unit)\n",tot,tot/n);
	printf("\n-------------------------------------------------------------------------\n");
	
	
	
	
	return 0;
}