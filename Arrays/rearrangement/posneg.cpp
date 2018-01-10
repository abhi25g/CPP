#include<iostream>
using namespace std;
int main()
{
	int *arr,size,temp,p,n;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	p=n=size-1;
	while(p&&n)
	{
		while(arr[p]<0&&p)
			p--;
		while(arr[n]>0&&n)
			n--;
		if(!p||!n)
			break;
		if(n<p)
		{
			temp=arr[p];
			arr[p]=arr[n];
			arr[n]=temp;
			p--;
		}
		else
			n--;
	}	
	cout<<"\nThe array is ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
