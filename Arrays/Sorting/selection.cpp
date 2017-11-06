#include<iostream>
using namespace std;
int main()
{
	int arr[10],temp,ind,min;
	cout<<"Enter the array ";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<10;i++)
	{
		min=arr[i];
		for(int j=i;j<10;j++)
		{
			if(arr[j]<min)
			{
				min=arr[j];
				ind=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[ind];
		arr[ind]=temp;
	}
	cout<<"The sorted array is ";
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
}
