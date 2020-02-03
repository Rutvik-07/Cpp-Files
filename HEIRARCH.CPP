//program for heirarchical inheritance
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
void main()
{
	clrscr();
	c c1;
	c1.cc();
	c1.aa();
	getch();
}