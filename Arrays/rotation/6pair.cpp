#include<iostream>
using namespace std;
int main()
{
	int *arr,min,max,size,k;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter the sum you want to search pair for ";
	cin>>k;
	min=0;
	max=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]<min)
			min=i;
		if(arr[i]>max)
			max=i;
	}
	while(min!=max)
	{
		if((arr[min]+arr[max])==k)
		{
			cout<<arr[min]<<","<<arr[max];
			break;
		}
		else if((arr[min]+arr[max])>k)
		{
			max=(size+max-1)%size;
		}
		else
		{
			min=(min+1)%size;
		}
	}
	if(min==max)
	{
		cout<<"\nNo such pair found";
	}
}
