#include<iostream>
using namespace std;
int main()
{
	int arr[10],temp,key;
	cout<<"Enter the array";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<10;i++)
	{
		key=arr[i];
		int j=i-1;
		while(arr[j]>key&&j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	cout<<"The sorted array is ";
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
}
