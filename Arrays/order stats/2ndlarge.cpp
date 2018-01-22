#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int *arr,size,max1=-1000,max2=-1000;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	if(size<2)
	{
		cout<<"\nNo second largest element";
		return 0;
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max1)
		{
			max2=max1;
			max1=arr[i];
		}
		else if(arr[i]>max2&&arr[i]<max1)
		{
			max2=arr[i];
		}
	}
	cout<<"\nThe second largest element is "<<max2;
}
