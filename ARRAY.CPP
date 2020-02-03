//display array values
#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int i;
	int a[5]={12,23,43,54,32};
	cout<<"Array values are: ";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
	}

	getch();
	return 0;
}