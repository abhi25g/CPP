#include<iostream>
using namespace std;
int main()
{
	int *arr,size,max=-100,sum;
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
		sum=0;
		for(int j=i;j<size;j++)
		{
			sum+=arr[j];
			sum>max?max=sum:0;
		}
	}
	cout<<"\nThe Maximum Sum of a subarray is "<<max;
}
