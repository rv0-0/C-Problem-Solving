#include<iostream>
using namespace std;


int gcd(int a,int b)
{
	if(a==0)
	return b;
	
	return gcd(b%a,a);
}

int main()
{
	int a,b,lcm;
	cin>>a>>b;
	lcm=(a*b)/gcd(a,b);
	cout<<lcm;
}
