#include<iostream>
#include <string>

using namespace std;

long long fib(long long n)
{
   long long i=1,h=1,j=0,k=0,t;
   while(n>0)
   {
       if(n%2==1)
       {
           t=j*h;
           j=i*h + j*k + t;
           i=i*k + t;
       }
       t=h*h;
       h= 2*k*h + t;
       k = k*k + t;
       n = (int) n/2;
   }
   return j;
}

int main()
{
   // cout<<fib(1);
    long long int m,n,temp=0,count=0,i=1;
    cin>>m;
    cin>>n;
    temp=fib(1);
    while(temp < n)
    {
        if(temp>m)
        {
        count++;
     //   cout<<temp<<endl;
        }
        temp = fib(i);
        i++;
    }
    cout<<count<<endl;
return 0;
}
