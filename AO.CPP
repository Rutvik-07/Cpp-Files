//program for array object
#include<iostream.h>
#include<conio.h>
class a
{
	public:
	char name[20];
	char clas[10];
	int rollno;
	void getdata()
	{
		cout<<"\nEnter a name: ";
		cin>>name;
		cout<<"\nEnter class: ";
		cin>>clas;
		cout<<"\nEnter a rollno: ";
		cin>>rollno;
	}
	void show()
	{
		cout<<"\nName: "<<name;
		cout<<"\nclass: "<<clas;
		cout<<"\nRoll no: "<<rollno;
	}
};
void main()
{
	a a1[5];
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		a1[i].getdata();
	}
	for(i=0;i<5;i++)
	{
		a1[i].show();
	}
	getch();
}
