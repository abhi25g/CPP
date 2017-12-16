#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	ll l1;
	cout<<"\nEnter the linked list ";
	l1.input();
	if(l1.length()%2)
		cout<<"\nOdd length";
	else
		cout<<"\nEven length";
	getch();
}