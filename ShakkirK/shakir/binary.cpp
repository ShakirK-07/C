#include<iostream>
using namespace std;
class complex
{
   int a,b;
 public:
   void getdata()
    {
       
       cin>>a>>b;
    
      }
  void displaydata()
    {
       cout<<"\n"<<a<<"+i"<<b;
    }
    
  complex operator +(complex obj)
  {
     complex s;
     s.a=a+obj.a;
     s.b=b+obj.b;
     return s;
 
    }

complex operator -(complex obj)
  {
     complex d;
     d.a=a-obj.a;
     d.b=b-obj.b;
     return d;
 
    }
};
int main()
{
    complex obj1,obj2,result1,result2;
    obj1.getdata();
    obj2.getdata();
    cout<<"Enter real and imaginary part of a complex number 1";
     
    cout<<"\nEnter real and imaginary part of a complex number 2";
      
    cout<<"\ncomplex number1";
    obj1.displaydata();
    cout<<"\ncomplex number2";
    obj2.displaydata();
    result1=obj1+obj2;
    cout<<"\nSum of complex numbers";
    result1.displaydata();
    result2=obj1-obj2;
    cout<<"\nDifference of complex numbers";
    result2.displaydata();
    return 0;
}
