#include<iostream>
using namespace std;
int main()
{
	int *arr,curr=0,max=0,size,sum=0;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
		curr+=i*arr[i];
	}
	cout<<sum<<"\n"<<curr;
	max=curr;
	for(int i=1;i<size;i++)
	{
		curr=curr-sum+size*arr[i-1];
		if(curr>max)
			max=curr;
	}
	cout<<"\nThe maximum sum is "<<max;
}
