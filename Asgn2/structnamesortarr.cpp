//Taking a list of student's details as input anf showing them in different ways

// #include<iostream>
// //#include<stdio.h>
// //#include<stdlib.h>
// using namespace std;

// void sortname(char []);

// struct stud
// {
// 	char name[50];
// 	int roll;
// };

// int main()
// {
//  stud s1;
// cout<<"name\n";
// 	gets(s1.name);
// 	cout<<"Roll\n";
// 	cin>>s1.roll;

// 	sortname(s1.name);
// 	puts(s1.name);
// 	cout<<s1.roll;
	
// 	return 0;
// }

// void sortname(char arr[])
// {
	
// 	int i;
//  	char ascii,ascii1;


// 	for(i=0;arr[i]!='\0';i++)
// 	{
// 		ascii=arr[i];
// 		ascii1=arr[i-1];
// 		if(i==0)
// 		{
// 			if(ascii>96 && ascii<123)
// 			{
// 				ascii-=32;
// 				arr[i]=ascii;
// 			}
// 		}
// 		else if(ascii1==32)
// 		{
// 			if(ascii>96 && ascii<123)
// 			{
// 				ascii-=32;
// 				arr[i]=ascii;
// 			}
// 			ascii1=arr[i];
// 		}
// 		else if(ascii>64 && ascii<91)
// 		{
// 			ascii+=32;
// 			arr[i]=ascii;
// 		}
// 	}	
// }

//----------------------sorting struct name wise without func-----------------------------------

#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

struct stud{
	char name[20],fnm;
	int roll;
	float marks[3];
};

void display(int ,stud[]);

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
	int i,j,n;
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
		}
	}
	cout<<"==============================\n";
	cout<<" :: Detail of the Students ::\n";
	cout<<"==============================\n\n";
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s[i].fnm>s[i+1].fnm)
			{
				temp=s[i];
				s[i]=s[i+1];
				s[i+1]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		display(i,s);
	}
	
	return 0;
}

void display(int i,stud s[])
{
	cout<<"Student No. :: "<<i+1<<" :: \n";
	cout<<"Name : "<<s[i].name<<"\n";
	cout<<"Roll : "<<s[i].roll<<endl;
	cout<<":: Marks ::\n";

	for(int j=0;j<3;j++)
	{
		cout<<"Subject "<<j+1<<":- "<<s[i].marks[j]<<"\n";
	}
	//cout<<"Total :-"
	cout<<endl<<endl;
}

