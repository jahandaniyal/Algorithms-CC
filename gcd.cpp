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
long long int C(long long int n, long long k)
{
    long long int numerator=1,denominator=1,toMul,toDiv,i;
    if(k>n/2) k=n-k; /*use smaller k */
    for(i=k;i;i--)
    {
         toMul=n-k+i;
         toDiv=i;
         Divbygcd(numerator,toDiv); /* always divide before multiply */
         Divbygcd(numerator,toDiv);
         Divbygcd(toMul,denominator);
         numerator*=toMul;
         denominator*=toDiv;
    }
    return numerator/denominator;
}



int main()
{
    cout<<gcd(12028,12772);
    return 0;
}
