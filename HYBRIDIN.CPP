//program for hybrid inheritance
#include<iostream.h>
#include<conio.h>
class a
{
	public:
	void aa()
	{
		cout<<"\nThis is aa";
	}
};
class b:public a
{
	public:
	void bb()
	{
		cout<<"\nThis is bb";
	}
};
class c:public a
{
	public:
	void cc()
	{
		cout<<"\nThis is cc";
	}
};
class d:public c
{
	public:
	void dd()
	{
		cout<<"\nThis is dd";
	}
};
void main()
{
	clrscr();
	d d1,d2;
	d1.dd();
	//d1.bb();
	d1.cc();
	d2.aa();
	getch();
}