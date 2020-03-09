#include<iostream.h>
#include<conio.h>
template<class type1,class type2>
void myfunc(type1 x,type2 y)
{
	cout<< x << " " << y << "\n";
}
void main()
{
	clrscr();
	myfunc(10, "I like c++");
	myfunc(98.6,"19UL");
	getch();
}