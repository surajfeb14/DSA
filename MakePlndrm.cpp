//Give any Number and it will make it palindrome by keep adding the palindrome number of it
#include<iostream>
using namespace std;
long int pchk(long int n)
{
    long int n1=n,t=0;
    while(n1>0)
    {
        t=(t*10)+n1%10;
        n1/=10;
    }
    if(n==t)
    {
        return 1;
    }else{
        return 0;
    }
}
long int getrev(long int n)
{
    long int t=0;
    while(n>0)
    {
        t=(t*10)+n%10;
        n/=10;
    }
    return t;
}
int main()
{
    long int n,r;
    cout<<"Enter the Number : ";
    cin>>n;
    while(!pchk(n))
    {
       cout<<n<<" + "<<getrev(n)<<" = ";
       n+=getrev(n);
       cout<<n<<endl;
    }
    cout<<n<<" is a palindrome number now ";
    return 0;
}