#include<iostream>
using namespace std;
class cmp
{
	int a,b;
	public:
	void  operator ++()
	{
		++a;
		++b;
	}
	void operator --()
	{
     	--a;
     	--b;
	}    
	void getdata()
	{
     	cout<<"Enter real and imaginary part of a complex number ";
     	cin>>a>>b; 
	}
	void displaydata()
	{ 
		cout<<"\nGiven complex number\n"<<a<<"+i"<<b;
	}
	void displaydata1()
	{
		cout<<"\nIncrement complex number\n"<<a<<"+i"<<b;
	}
	void displaydata2()
	{
		cout<<"\nDecrement complex number\n" <<a<<"+i"<<b; 
	}
};
int main()
{
  cmp n;
  n.getdata();
  n.displaydata();
  ++n;
  n.displaydata1();
  --n;
  n.displaydata2();
    return 0;
}
