#include<iostream>
using namespace std;
int main()
{
	int *arr,*ms,size,sum;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	ms=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
		ms[i]=arr[i];
	}
	for(int i=0;i<size;i++)
	{
		sum=arr[i];
		int j=(i+1)%size;
		while(j!=i)
		{
			sum+=arr[j];
			if(sum>ms[i])
				ms[i]=sum;
			j=(j+1)%size;
		}
	}
	int max=ms[0];
	for(int i=1;i<size;i++)
	{
		if(ms[i]>max)
			max=ms[i];
	}
	cout<<"\nThe maximum circular subarray sum is "<<max;
}
