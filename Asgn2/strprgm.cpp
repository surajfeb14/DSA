#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

struct stud{
	char name[20],fnm;
	int roll;
	float marks[3];
	float total;
	float avg;
};

void display(int ,stud[]);

void srtroll(int ,stud []);
void srtnm(int ,stud []);
void srttotal(int ,stud []);
void srtsub(int ,stud []);

void sortname(char arr[])
{
	
	int i;
char ascii,ascii1;


	for(i=0;arr[i]!='\0';i++)
	{
		ascii=arr[i];
		ascii1=arr[i-1];
		if(i==0)
		{
			if(ascii>96 && ascii<123)
			{
				ascii-=32;
				arr[i]=ascii;
			}
		}
		else if(ascii1==32)
		{
			if(ascii>96 && ascii<123)
			{
				ascii-=32;
				arr[i]=ascii;
			}
			ascii1=arr[i];
		}
		else if(ascii>64 && ascii<91)
		{
			ascii+=32;
			arr[i]=ascii;
		}
	}	
}

int main()
{
	int i,j,n,c;
	cout<<"No. of students : \n";
	cin>>n;
	stud s[n],temp;
	for(i=0;i<n;i++)
	{
        cout<<"Roll of the Student "<<i+1<<" : \n";
		cin>>s[i].roll;
        cin.ignore();
		cout<<"Name of the Student "<<i+1<<" : \n";
		cin.getline(s[i].name,20);
        sortname(s[i].name);
        s[i].fnm=s[i].name[0];
       
		for(j=0;j<3;j++)
		{
			cout<<"Marks for Subject "<<j+1<<" : \n";
			cin>>s[i].marks[j];
			s[i].total=(s[i].total+s[i].marks[j]);
		}
		s[i].avg=(s[i].total/3);
	}
	cout<<"How do you want to print the list?\nEnter :-\n";
	cout<<"'0' to Print The List As It Is\n'1' to Print The List Roll No. Wise\n";
	cout<<"'2' to Print The List Name Wise\n'3' to Print The List Total Marks Wise\n";
	cout<<"'4' to Print Specific student's details in specific subject\n";
	cin>>c;
	switch(c)
	{
		case 0: display(n,s);
			break;
		case 1: srtroll(n,s);
			break;
		case 2: srtnm(n,s);
			break;
		case 3: srttotal(n,s);
			break;
		case 4: srtsub(n,s);
			break;
	}
	
	return 0;
}

void srtnm(int n,stud s[])
{
	int i,j;
	stud temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s[j].fnm>s[j+1].fnm)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	cout<<"==============================\n";
	cout<<" :: Detail of the Students ::\n";
	cout<<"==============================\n\n";	
	cout<<"\n:: Pinting List Namewise ::\n\n";
	
	for(i=0;i<n;i++)
	{
		display(i,s);
	}
}

void srtroll(int n,stud s[])
{
	int i,j;
	stud temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s[j].roll>s[j+1].roll)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	cout<<"==============================\n";
	cout<<" :: Detail of the Students ::\n";
	cout<<"==============================\n\n";	
	cout<<"\n:: Pinting List Roll No. wise ::\n\n";
	for(i=0;i<n;i++)
	{
		display(i,s);
	}
}

void srttotal(int n,stud s[])
{
	int i,j;
	stud temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s[j].total<s[j+1].total)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	cout<<"==============================\n";
	cout<<" :: Detail of the Students ::\n";
	cout<<"==============================\n\n";	
	cout<<":: Pinting List Total Marks wise ::\n\n";
	for(i=0;i<n;i++)
	{
		display(i,s);
	}
}

void srtsub(int n,stud s[])
{
	int i,j,h;
	stud temp;
	cout<<"Which subject's highest you want 1/2/3 ?\n";
	cin>>h;
	h--;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s[j].marks[h]<s[j+1].marks[h])
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	cout<<":: Pinting the student's details who got highest in subject "<<h+1<<" ::\n\n";
	cout<<"Name : "<<s[0].name<<endl;
	cout<<"Roll : "<<s[0].roll<<endl;
	cout<<":: Marks ::\n";

	for(int j=0;j<3;j++)
	{
		cout<<"Subject "<<j+1<<": "<<s[0].marks[j]<<"\n";
	}
	cout<<"Total : "<<s[0].total<<endl;
	cout<<"Average : "<<s[0].avg<<endl;
	cout<<endl;
	
	
}

void display(int n,stud s[])
{
		cout<<"==============================\n";
		cout<<" :: Detail of the Students ::\n";
		cout<<"==============================\n\n";	
	for(int i=0;i<n;i++)
	{
		cout<<"Student No. :: "<<i+1<<" :: \n";
		cout<<"Name : "<<s[i].name<<"\n";
		cout<<"Roll : "<<s[i].roll<<endl;
		cout<<":: Marks ::\n";

		for(int j=0;j<3;j++)
		{
			cout<<"Subject "<<j+1<<": "<<s[i].marks[j]<<"\n";
		}
		cout<<"Total : "<<s[i].total<<endl;
		cout<<"Average : "<<s[i].avg<<endl;
		cout<<endl;
	}
}