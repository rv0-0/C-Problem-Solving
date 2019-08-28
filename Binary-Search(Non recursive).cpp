#include<iostream>
using namespace std;
#include<stdlib.h>


int binarysearch(int b[],int s,int e,int x)
{
	
	while(s<=e)
	{
		int mid=(s+e)/2;
		
		if(b[mid]==x)
		return mid;
		
		if(b[mid]<x)
		s=mid+1;
		else
		e=mid-1;
		cout<<"Mid:"<<b[mid]<<"\nStart:"<<s<<"\nend:"<<e<<endl;
	}
	return -1;
}


int main()
{
	int a[]={2,20,35,45,69,89,99};
	int x=3;
	int n=sizeof(a)/sizeof(a[0]);
	int result=binarysearch(a,0,n-1,x);
	cout<<result+1;
}
