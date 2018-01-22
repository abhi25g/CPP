#include<iostream>
using namespace std;
int main()
{
	int *arr,size,temp,low,high,mid;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	low=mid=0;
	high=size-1;
	while(mid<=high)
	{
		switch(arr[mid])
		{
			case 0:temp=arr[low];
				   arr[low]=arr[mid];
				   arr[mid]=temp;
				   mid++;
				   low++;
				   break;
			case 1:mid++;
				   break;
			case 2:temp=arr[high];
				   arr[high]=arr[mid];
				   arr[mid]=temp;
				   mid++;
				   high--;
				   break;
		}
	}
	cout<<"\nThe array is ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
