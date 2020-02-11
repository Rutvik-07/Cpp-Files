//program for inline function
#include<iostream.h>
#include<conio.h>
inline int square(int a)
{
	cout<<"\nSquare of "<<a<<" is :"<<a*a;
	return a*a;
}
void main()
{
	clrscr();
	int a,b;

	cout<<"\n Enter a number :";
	cin>>a;
	square(a);
	getch();
}