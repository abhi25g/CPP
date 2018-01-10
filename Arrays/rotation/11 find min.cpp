#include<iostream>
using namespace std;
int main()
{
	int *arr,size,b,e,m,min;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	b=0;
	e=size-1;
	while(b<=e)
	{
		m=(b+e)/2;
		if(m==0||b==e)
		{
			min=arr[m];
			break;
		}
		if(arr[m]<arr[m-1])
		{
			min=arr[m];
			break;
		}
		if(arr[m+1]<arr[m])
		{
			min=arr[m+1];
			break;
		}
		if(arr[m]>arr[e])
			b=m+1;
		else
			e=m-1;
	}
	cout<<"\nThe minimum element is "<<min;
}
