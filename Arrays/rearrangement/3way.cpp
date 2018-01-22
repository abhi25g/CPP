#include<iostream>
using namespace std;
int main()
{
	int *arr,size,temp,low,high,mid,lval,hval;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter the value of low and high ";
	cin>>lval>>hval;
	low=mid=0;
	high=size-1;
	while(mid<=high)
	{
		if(arr[mid]<lval)
		{
			temp=arr[low];
			arr[low]=arr[mid];
			arr[mid]=temp;
			mid++;
			low++;
		}
		else if(arr[mid]>hval)
		{
			temp=arr[high];
			arr[high]=arr[mid];
			arr[mid]=temp;
			high--;
		}
		else
		{
			mid++;
		}
	}
	cout<<"\nThe array is ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
