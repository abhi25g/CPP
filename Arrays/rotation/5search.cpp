#include<iostream>
using namespace std;
int main()
{
	int *arr,size,b,e,m,k;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter the key you want to search ";
	cin>>k;
	b=0;
	e=size-1;
	while(b<=e)
	{
		m=(b+e)/2;
		if(arr[m]==k)
		{
			cout<<"\nElement found at index "<<m+1;
			break;
		}
		else if(arr[b]<arr[m])
		{
			if(k<arr[b])
				b=m+1;
			else
				e=m-1;
		}
		else
		{
			if(k>arr[m])
				b=m+1;
			else
				e=m-1;
		}
	}
	if(b>e)
	{
		cout<<"\nElement not found";
	}
}
