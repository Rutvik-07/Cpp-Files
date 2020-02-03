//program for single inheritance
#include<iostream.h>
#include<conio.h>
class a
{
	public:
	void aa()
	{
		cout<<"\nThis is aa";
	}
} ;
class b:public a
{
	public:
	void bb()
	{
		cout<<"\nThis is bb";
	}
};
void main()
{
	clrscr();
	b b1;
	b1.bb();
	b1.aa();
	getch();
}