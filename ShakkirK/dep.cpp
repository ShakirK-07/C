#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 int main() 
 {

float a, b, c, disc, x1, x2;
cout<<"input =";
cin >> a >> b >> c;
disc = b*b - 4*a*c;

if (disc > 0) 
{
x1 = (-b + sqrt(disc)) / (2*a);
x2 = (-b - sqrt(disc)) / (2*a);
cout << "Enter the coefficients" << endl;
cout<<setprecision(2)<<x1<<setprecision(3)<<x2;
}

else if (disc == 0) {
cout << "Enter the coefficients" << endl;
x1 = -b/(2*a);
cout << x1 << endl;
}

else
{

cout << "Enter the coefficients=Imaginary roots" << endl;

}

return 0;
}


