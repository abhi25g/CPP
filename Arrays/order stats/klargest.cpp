#include<iostream>
using namespace std;
void maxheapify(int *arr,int i)
{
	int max=i;
	if((2*i)<=arr[0]&&arr[2*i]>arr[max])
	{
		max=2*i;
	}
	if((2*i+1)<=arr[0]&&arr[2*i+1]>arr[max])
	{
		max=2*i+1;
	}
	if(max!=i)
	{
		int temp=arr[max];
		arr[max]=arr[i];
		arr[i]=temp;
		maxheapify(arr,max);
	}
}
int extractmax(int *arr)
{
	int size=arr[0];
	int temp=arr[1];
	arr[1]=arr[size];
	arr[size]=temp;
	arr[0]--;
	maxheapify(arr,1);
	return temp;
}
void buildmaxheap(int *arr)
{
	for(int i=arr[0]/2;i>0;i--)
	{
		maxheapify(arr,i);
	}
}
int main()
{
	int *arr,size,n;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size+1];
	arr[0]=size;
	cout<<"\nEnter the array ";
	for(int i=1;i<size+1;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter k ";
	cin>>n;
	buildmaxheap(arr);
	for(int i=0;i<n;i++)
	{
		cout<<extractmax(arr)<<" ";
	}
}
