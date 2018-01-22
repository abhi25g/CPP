#include<iostream>
using namespace std;
int main()
{
	int *arr,size,k,temp;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter the number k ";
	cin>>k;
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=size-k;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
