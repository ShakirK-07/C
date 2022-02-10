#include<iostream>
using namespace std;
int rev(int a);
main()
{
	int a,r;
	cout<<"\n Enter the number";
	cin>>a;
        r=rev(a);
	cout<<"\n Reversed number="<<r;
}
int rev(int a)
{
	int rev=0,i,r;
	while(a!=0)
 		{
			i=a%10;
			rev=rev*10+i;
			a=a/10;
		}
	return(rev);
}
