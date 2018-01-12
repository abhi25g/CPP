#include<iostream>
using namespace std;
int main()
{
	int *arr,size,prev,curr;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	prev=arr[0];
	curr=arr[0];
	cout<<"\nThe array is ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(int i=0;i<size-1;i++)
	{
		curr=arr[i];
		arr[i]=prev*arr[i+1];
		prev=curr;
	}
	arr[size-1]*=prev;
	cout<<"\nThe array is ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
