#include<iostream>
using namespace std;
int main()
{
	int *arr,size,temp,max;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nThe array is ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	max=arr[size-1];
	arr[size-1]=-1;
	for(int i=size-2;i>=0;i--)
	{
		temp=arr[i];
		arr[i]=max;
		if(max<temp)
			max=temp;
	}
	cout<<"\nThe array is ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
