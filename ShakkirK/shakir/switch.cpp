#include<iostream>
using namespace std;
int main()
{
  int x,y,z;
  char operand,Q;
  cout<<"Enter two numbers";
  cout<<"\nX = ";
  cin>>x;
  cout<<"\nY = ";
  cin>>y;
  do
  { 
    cout<<"\n\nPlease enter the the problem to you would like to solve:"<<endl;
    cout<<"'+' for addition"<<endl;
    cout<<"'-' for substraction"<<endl;
    cout<<"'*' for multiplication"<<endl;
    cout<<"'/' for modules"<<endl;
    cout<<"Enter Q to quit"<<endl;
    cout<<"Enter your choice : ";
    cin>>operand;
    switch(operand)
    {
      case'+':z=x+y;
      cout<<"answer="<<x<<"+"<<y<<"="<<z<<endl;    
      break;
      case'-':z=x-y;
      cout<<"answer="<<x<<"-"<<y<<"="<<z<<endl;
      break;
      case'*':z=x*y;
      cout<<"answer="<<x<<"*"<<y<<"="<<z<<endl;
      break;
      case'%':x%y;
      cout<<"answer="<<x<<"%"<<y<<"="<<z<<endl;
      break;
      case'/':
      if(y==0)
      {
        cout<<"that is an invalid operation"<<endl;
      }
      else
      {
        z=x/y;
        cout<<"\nQAnswer=\n"<<x<<"/"<<y<<"="<<z<<endl;
      }
      break;
      default:cout<<"that is an invalid operation"<<endl;
      break;
    }
  }
  while(operand !='Q');
  return 0;
}
