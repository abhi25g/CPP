#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	ll l1;
	int n,k=1,sum=0;
	node *ptr=0;
	cout<<"\nEnter the linked list ";
	l1.input();
	cout<<"\nEnter the value of n ";
	cin>>n;
	if(n>l1.length())
	{
		cout<<"\nThe list is not that long";
		getch();
		exit(0);
	}
	ptr=l1.head;
	while(k<=(l1.length()-n))
	{
		ptr=ptr->next;
		k++;
	}
	while(ptr)
	{
		sum+=ptr->info;
		ptr=ptr->next;
	}
	cout<<"\nThe sum of last "<<n<<" nodes is "<<sum;
	getch();
}