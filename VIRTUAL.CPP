//program for pure virtual function
#include<iostream.h>
#include<conio.h>
class a
{
	public:

      virtual void print()
	{
		cout<<"\nThis is base class a ";
	}

};
class b:public a
{
	public:
	void print()
	{
		cout<<"\nThis is class b";
	}


};
class c:public a
{
	public:
	void print()
	{
		cout<<"\nThis is class c";
	}
};
void main()
{
	clrscr();
	a *p;
	a a1;
	b b1;
	c c1;
	p=&a1;
	p->print();
	p=&b1;
	p->print();
	p=&c1;
	p->print();
	getch();
}
