#include <iostream>

using namespace std;
int gcd(int a, int b)
{if(a>b){
   int r;
   r=a%b;
   if(r==0)
   {
       return b;

   }
   else
   {

    a=b;

    b=r;


    gcd(a,b);
   }
}
else
{
    int r;
   r=b%a;
   if(r==0)
   {
       return a;

   }
   else
   {

    b=a;

    a=r;


    gcd(b,a);
}

}

}

int main()
{
   int rem;
   cout<<"This is a program that finds the Greatest Common Divisor(GCD) of two numbers."<<endl;
   cout<<"Please enter two numbers: ";
   int a,b;
   cin>>a>>b;

   rem=gcd(a,b);
   cout<<"The Greatest Common Divisor of "<<a<<" and "<<b<<" is "<<rem<<"."<<endl;
}
