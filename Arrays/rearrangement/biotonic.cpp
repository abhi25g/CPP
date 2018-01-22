#include<iostream>
using namespace std;
int main()
{
	int *arr,*inc,*dec,size,temp,max;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	inc=new int[size];
	dec=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
		inc[i]=dec[i]=1;
	}
	for(int i=1;i<size;i++)
	{
		if(arr[i]>arr[i-1])
			inc[i]=inc[i-1]+1;
	}
	for(int i=size-2;i>=0;i--)
	{
		if(arr[i]>arr[i+1])
			dec[i]=dec[i+1]+1;
	}
	max=inc[0]+dec[0]-1;
	for(int i=1;i<size;i++)
	{
		if(inc[i]+dec[i]-1>max)
			max=inc[i]+dec[i]-1;
	}
	cout<<"\nThe length of longest biotonic subarray is "<<max;
}
