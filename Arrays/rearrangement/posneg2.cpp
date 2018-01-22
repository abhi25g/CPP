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
		while(arr[b]>=0)
			b++;
		while(arr[e]<0)
			e--;
		if(b<e)
		{
			temp=arr[e];
			arr[e]=arr[b];
			arr[b]=temp;
			b++;
			e--;
		}
	}
	int i=0,k=1;
	while(arr[i]>=0)
		i++;
	while(i<size&&k<i)
	{
		temp=arr[k];
		arr[k]=arr[i];
		arr[i]=temp;
		i++;
		k+=2;
	}
	cout<<"\nThe array is ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
