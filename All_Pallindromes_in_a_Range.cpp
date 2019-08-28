#include<iostream>
#include<stdlib.h>
using namespace std;

int pallindrom(int n)
{
	int rev=0;
	int m=n;
	while(n!=0)
	{
		int d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	if(m==rev)
	return 1;
	return 0;
}

int main()
{
	int n;
	cin>>n;
	int m,c=0;
	cin>>m;
	for(int i=n;i<=m;i++)
	{
		if(pallindrom(i))
		{
			cout<<i<<endl;
			c++;
		}
	}
	cout<<"Count:"<<c;
}
