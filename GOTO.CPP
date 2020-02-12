//program for goto statement
#include<iostream.h>
#include<conio.h>
void show()
{
	int x=0;
	again:
	cout<<"\n x= "<<x;
	x++;
	if(x<=10)
	{
		goto again;
	}
}
void main()
{
	clrscr();
	show();
	getch();
}