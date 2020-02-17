#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i;
	int *p=new int(10);
	int *q=new int(20);
	int *a=new int[5];
	cout<<"\nValues of two pointer variables are: "<<*p<<" and "<<*q<<"\n";
	cout<<"\nAddress of two pointer variables are: "<<p<<" and "<<q<<"\n";
	cout<<"\nAddition of two pointer variable is: "<<(*p + *q)<<"\n";
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter "<<i+1<<" value:";
		cin>>a[i];
	}
	cout<<"\nArray values are:\n";
	for(i=0;i<5;i++)
	{
	      cout<<a[i]<<"\t";
	}
	cout<<"\nArray values address are:\n";
	for(i=0;i<5;i++)
	{
		cout<<&a[i]<<"  ";
	}
	delete p;
	delete q;
	delete [] a;
	getch();

}