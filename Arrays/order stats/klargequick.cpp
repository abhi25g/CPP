#include<iostream>
int partition(int *arr,int left,int right)
{
	int temp, i=left-1,j=left,pivot=right;
	while(j<pivot)
	{
		if(arr[j]<arr[pivot])
		{
			i++;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			j++;
		}
		else
			j++;
	}
	i++;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	return i;
}
using namespace std;
int main()
{
	int *arr,size,k,ind,temp,b,e;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter the number k ";
	cin>>k;
	b=0;
	e=size-1;
	while(b<e)
	{
		ind=partition(arr,b,e);
		cout<<ind<<"\n";
		if(ind<size-k+1)
			e=ind-1;
		else if(ind>size-k+1)
			b=ind+1;
		else
			break;
	}
	for(int i=ind;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
