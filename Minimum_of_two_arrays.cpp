#include<iostream>
#include<stdlib.h>
using namespace std;

int min(int a[],int n)
{
	
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	return min;
}

int main()
{
	int a[]={345,124,67,845,34,55,0,34,11};
	int b[]={345,32,67,221,34,2211,22,34,11};
	int min1,min2;
	min1=min(a,sizeof(a)/sizeof(a[0]));
	min2=min(b,sizeof(b)/sizeof(b[0]));
	if(min1<=min2)
	cout<<min1;
	else
	cout<<min2;
}
