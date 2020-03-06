//Program for pure virtual function
#include<iostream.h>
#include<conio.h>
class a
{
	public:

      virtual void print()=0;

};
void a::print()
{
	cout<<"\nThis is pure virtual function";
}
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
	b b1;
	c c1;
	p=&b1;
	p->print();
	p=&c1;
	p->print();
	getch();
}
