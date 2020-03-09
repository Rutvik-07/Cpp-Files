//program for override genric version
#include<iostream.h>
#include<conio.h>
template <class X>
void swapargs(X &a,X &b)
{
	X temp;

	temp=a;
	a=b;
	b=temp;
	cout<<"Inside template swapargs \n";
}
void swapargs(int &a,int &b)
{
	int temp;

	temp=a;
	a=b;
	b=temp;
	cout<<"Inside swapargs int specialization \n";
}
void main()
{
	int i=10,j=20;
	double x=10.1,y=23.3;
	char a='x',b='z';
	clrscr();
	cout<<"original i, j: "<< i << " " << j << "\n" ;
	cout<<"original x, y: "<< x << " " << y << "\n" ;
	cout<<"original a, b: "<< a << " " << b << "\n" ;

	swapargs(i,j);
	swapargs(x,y);
	swapargs(a,b);

	cout<<"original i, j: "<< i << " " << j << "\n" ;
	cout<<"original x, y: "<< x << " " << y << "\n" ;
	cout<<"original a, b: "<< a << " " << b << "\n" ;
	getch();
}