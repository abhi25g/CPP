#include<iostream>
using namespace std;
int main()
{
	int *arr,size,max=-100,prod;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		prod=1;
		for(int j=i;j<size;j++)
		{
			prod*=arr[j];
			prod>max?max=prod:0;
		}
	}
	cout<<"\nThe Maximum product of a subarray is "<<max;
}
