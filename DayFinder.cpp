//									  :: DayFinder ::
#include<iostream>
using namespace std;

int main()
{
	int d,m,y,i,sy,cy,ody,odm=0,mrr[12]={3,0,3,2,3,2,3,3,2,3,2,3};
	
	cout<<":: Welcome To DayFinder ::\n"<<"Enter The Date : \n";
	cin>>d;
	cout<<"Enter The Month : \n";
	cin>>m;
	cout<<"Enter The Year : \n";
	cin>>y;
	
	cout<<"\nGiven Date :- ";
	cout<<"\n--------------\n"<<d<<" / "<<m<<" / "<<y<<"\n--------------\n";
	
	if(y%4==0 && m>2)//if leap year then odd in feb should be 1
	{
		mrr[1]=1;
	}
	if(y%100==0)//if leap year then odd in feb should be 1
	{
		
			if(y%400==0 && m>2)//if leap year then odd in feb should be 1
		{
			mrr[1]=1;
		}
			else
		{
			mrr[1]=0;
		}
	}
	
	m=m-1;
	y=y-1;//to find odd days till last year
	sy=y%100;//to get the year without century
	cy=y-sy;//to find out the century year
	ody=cy%400;//to get the remaining year after subtracting years divisivle by 400

	if(ody==100)
	{
		ody=5;
	}
	else if(ody==200)
	{
		ody=3;
	}
	else if(ody==300)
	{
		ody=1;
	}
	else
	{
		ody=0;
	}
	
	ody=ody+(sy/4);//to get how many leapyears are there in between
	ody=ody+sy;//to get odd days
	
	for(i=0;i<m;i++)//total odd days till previous month
	odm=odm+mrr[i];
	
	ody=ody+odm+d;//adding every odd day
	ody=ody%7;//calculation of weekday
	
	cout<<"It Was -> ";
	
	switch(ody)
	{
		case 0:
			cout<<"Sunday";
			break;
		case 1:
			cout<<"Monday";
			break;
		case 2:
			cout<<"Tuesday";
			break;
		case 3:
			cout<<"Wednesday";
			break;
		case 4:
			cout<<"Thursday";
			break;
		case 5:
			cout<<"Friday";
			break;
		case 6:
			cout<<"Saturday";
			break;
	}
	cout<<endl;
	
	return 0;
}