#include<iostream>

using namespace std;

unsigned long long gcd(unsigned long long a,unsigned long long b) {
if (a%b==0) return b; else return gcd(b,a%b);
}
void Divbygcd(unsigned long long& a,unsigned long long& b) {
long g=gcd(a,b);
a/=g;
b/=g;
}
unsigned long long C(unsigned long long n,unsigned long long k){
unsigned long long numerator=1,denominator=1,toMul,toDiv,i;
if (k>n/2) k=n-k; /* use smaller k */
for (i=k;i;i--) {
toMul=n-k+i;
toDiv=i;
Divbygcd(toMul,toDiv); /* always divide before multiply */
Divbygcd(numerator,toDiv);
Divbygcd(toMul,denominator);
numerator*=toMul;
denominator*=toDiv;
}
return numerator/denominator;
}

int main()
{
    int T;
    unsigned long long N,R;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        cin>>R;
        cout<<C(N,R)<<endl;
    }
    return 0;
}
