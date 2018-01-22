#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int *arr,size,miss,b,e,mid;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	if(arr[0]!=0)
	{
		cout<<"\nSmallest Missing Number is 0";
		return 0;
	}
	b=1;
	e=size-1;
	while(b<e)
	{
		mid=(b+e)/2;
		if(b>e)
			miss=e+1;
		if(arr[b]!=b)
		{
			miss=b;
			break;
		}
		if(arr[mid]>mid)
			e=mid-1;
		else
			b=mid+1;
	}
	cout<<"\nSmallest Missing Number is "<<miss;
}
