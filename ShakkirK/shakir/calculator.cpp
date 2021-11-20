#include<iostream>
using namespace std;
int main()
{
  float num1, num2, sum;
  char operand,Q;
  cout<<"enter the numbers";
  cout<<"/n x=";
  cin>>x;
  cout<<"/n y=";
  cin>>y;
  do
   {
     cout<<"\n\n pleas enterthe operent of the problem to you would like to solve:"<<endl;
	cout<<"+ for addition"<<endl;
	cout<<"- for subtraction"<<endl;
	cout<<"* for multiplication"<<endl;
	cout<<"/ for division"<<endl;
	cout<<"% for modulus"<<endl;
	cout <<"enter Q to quit"<<endl;
	cout<<"enter your choice=="<<endl;
	cin>>operand;
	switch(operand)
	{
	  case'+': z=x+y;
	  cout<<"answer="<<x<<"+"<<y<<"="<<z<<endl;
	    break;
	   case'-':z=x-y;
	  cout<<"answer="<<x<<"-"<<y<<"="<<z<<endl;
	 break;
	 case'*':z=x*y;
	cout<<"answer="<<x<<"*"<<y<<"="<<z<<endl;
	break;
case'/':if(y==0)
	 {
	   cout<<"that is an invalid operation"<<endl;
	 }
else
   {
     z=x/y;
	cout<<"answer=\n"<<y<<"="<<z<<endl;
   }
break;
	}
	}
	 while(operand !='Q');
    

  return 0;
  }
 