//use of scope resolution operator as seperate globle variable
#include<iostream>
using namespace std;
int a;
int main()
{
	int a;
	cout<<"\nEnter two numbers for addition:";
	cin>>a>>::a;
	cout<<"\nGloble variable value is:"<<::a;
	cout<<"\nSum is :"<<a + ::a;
	return 0;
}
