#include<stdio.h>
int test(int f[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(f[i]!=1)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int f[4]={0},n=4,tq=2,at[4]={0,1,2,3},bt[4]={5,3,1,6},ct[4],tat[4],rt[4],wt[4],rbt[4],ctt=0,i,j,k;
	
	for(i=0;i<n;i++)
	{
		rbt[i]=bt[i];	
	}
	
while(test(f,n))
{
	
	if(rbt[i]>=tq)
	{
		ctt+=tq;
		rbt[i]-=tq;
		if(rbt[i]==0)
		{
			ct[i]=ctt;
			f[i]=1;
		}
	}
	else
	{
		if(f[i]!=1)
		{
		ctt+=rbt[i];
		ct[i]=ctt;
		f[i]=1;
		}
	}
	i=(i+1)%n;
	
}

for(i=0;i<n;i++)
{
	tat[i]=ct[i]-at[i];
	wt[i]=tat[i]-bt[i];
	j+=wt[i];
}

for(i=0;i<n;i++)
{
	printf("%d\t%d\t%d\t%d\t%d\n",i,bt[i],wt[i],tat[i],j);
}
	
	
	return 0;
}