#include <iostream>

using namespace std;
long long int gcd(long long int a, long long b)
{
    if(a%b==0) return b; else return gcd(b,a%b);
}
void Divbygcd(long long int& a,long long int& b)
{
    long g=gcd(a,b);
    a/=g;
    b/=g;
}

int main()
{
    long long int N,M,temp;
    cin>>N;
    cin>>M;
    temp=gcd(N,M);
    cout<<N/temp<<" "<<M/temp<<endl;
    return 0;
}
