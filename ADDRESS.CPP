//display address of array values
#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int i;
	int *p;
	int a[5]={12,23,43,54,32};
	p=&a[5];
	cout<<"Address of array values are: ";
	for(i=0;i<5;i++)
	{
		cout<<&a[i]<<"\t";
	}

	getch();
	return 0;
}