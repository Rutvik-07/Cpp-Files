//program for friend function
#include<iostream>
using namespace std;
class a
{
	private:
		int a,b;
	public:
		void sum(int a,int b);
	friend int sub(int a,int b);
		
};
void a::sum(int a,int b)
{
	cout<<"\nSum is :"<<(a+b);
}
int sub(int a,int b)
{
	cout<<"\nSub is :"<<(a-b);
	return 0;
}
int main()
{
	a a1;
	int x,y;
	cout<<"\nEnter two numbers :";
	cin>>x>>y;
	a1.sum(x,y);
	sub(x,y);
	return 0;
}
