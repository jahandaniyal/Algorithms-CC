#include<iostream>
#include <string>

#define square(x) x*x
using namespace std;

long long bigmod(long long b, long long p, long long m)
{
    if(p==0)
        return 1;
    else if(p%2==0)
        return square(bigmod(b,p/2,m))%m;
    else
        return ((b%m)* bigmod(b,p-1,m))%m;
}

int main()
{

cout<<bigmod(2,170,10000000007)<<endl;

return 0;
}
