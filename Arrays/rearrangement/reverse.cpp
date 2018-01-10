#include<iostream>
using namespace std;
int main()
{
	int *arr,size,temp,b,e;
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
	while(b<e)
	{
		temp=arr[b];
		arr[b]=arr[e];
		arr[e]=temp;
		b++;
		e--;
	}
	cout<<"\nThe array is ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
