#include <iostream>

using namespace std;
int lcm;
int main()
{
int gcd;
     int a, b, x, y, t;
    cout << "enter two numbers" << endl;
    cin>> x >> y;
     a=x;
     b=y;
    while (b != 0){
     t=b;
     b=a%b;
     a=t;}
     gcd = a;
     lcm=(x*y)/gcd;

     cout<<"greatest common divisor of "<< x <<" and "<< y <<" is "<<gcd<<endl;




    return 0 ;
}
