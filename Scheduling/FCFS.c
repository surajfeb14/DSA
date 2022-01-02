//FCFS Process Scheduling Using c
#include <stdio.h>
typedef struct process
{
	//a-> arrival, b-> burst, t-> turn around, w-> wating
	int atime,btime,ttime,wtime; 
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
		
		printf("\nEnter the Arrival Time of Process %c : ",id);
		scanf("%d",&arr[i].atime);
		printf("\nEnter the Burst Time of Process %c : ",id);
		scanf("%d",&arr[i].btime);
		arr[i].pid=id;
		id++;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i].atime>arr[j].atime)
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
			arr[i].wtime=arr[i].atime;
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
	printf("\nPID\tArrival Time\tBurst Time\tWaiting Time\tTurn Around Time\n\n");
	for(i=0;i<n;i++)
	{
		printf("%c\t\t%d\t    %d\t\t\t%d\t\t%d\n",arr[i].pid,arr[i].atime,arr[i].btime,arr[i].wtime,arr[i].ttime);
	}
	printf("\n-------------------------------------------------------------------------\n");
	printf("\nTotal Wating Time : %d (Time Unit)\nAverage Wating Time : %d (Time Unit)\n",tot,tot/n);
	printf("\n-------------------------------------------------------------------------\n");
	
	
	
//	printf("\n===================== :: GANTT CHART :: ====================\n\n");
//	//printf(" ");
//	for(j=0;j<arr[i-1].ttime;j++)
//	{
//		printf("---");
//	}
//	printf("\n|");
//	for(j=0;j<n;j++)
//	{
//		for(k=0;k<arr[j].btime;k++)
//		{
//			printf(" ");
//		}
//		printf("%c",arr[j].pid);
//		for(k=0;k<arr[j].btime;k++)
//		{
//			printf(" ");
//		}
//		printf("|");
//	}
//	printf("\n");
//	for(j=0;j<arr[i-1].ttime;j++)
//	{
//		printf("---");
//	}
//	printf("\n");
//	for(j=0;j<n;j++)
//	{
//		
//		printf("%d",arr[j].wtime);
//		for(k=0;k<arr[j].btime;k++)
//		{
//			printf("   ");
//		}
//		
//	}
//	printf("%d",arr[j-1].ttime);
//	
//	
//	printf("\n\n\n\n\n");
	
	
	
	return 0;
}