//program for all types of constructors
#include<iostream.h>
#include<conio.h>
class a
{
	public:
		int x;
	public:
	a()
	{
		cout<<"\nThis is default constructor";
	}
	a(int a)
	{       x=a;
		cout<<"\nThis is parameterised constructor";
	}
	a(a &z)
	{
		cout<<"\nx ="<<z.x;
		cout<<"\nThis is copy constructor";
	}
};
void main()
{
	clrscr();
	a obj1,obj2(5),obj3(obj2);
	getch();

}