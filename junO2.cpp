#include <iostream>
#include <math.h>
using namespace std;

#define MAX 100000000000000000000

int main()
{
    long long int T,a,d,p,an=0,n=1,mul=0,t1,t2,af=0,ac=0,pos=0,pr;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>a;
        cin>>d;
        cin>>p;
        pr=p;
        while(af<MAX && ac<MAX)
        {
            mul=(n-1)*d;
            cout<<"P : "<<p<<endl;
            t1 = ceil((p-a)/d + 1);
            t2 = t1+1;
            cout<<"T1 : "<<t1<<endl;
            cout<<"T2 : "<<t2<<endl;
            af=(a + (t1-1)*d);
            ac=(a + (t2-1)*d);
            an = a + mul;
            cout<<"nth Term : " <<an<<endl;
            cout<<"Floor term : "<<af<<endl;
            cout<<"Ceil term : "<<ac<<endl;
            if(p==af) {pos=t1;cout<<pos-1<<endl; break;}
            else if(p==ac) {pos=t2;cout<<pos-1<<endl; break;}
            n++;
            p +=pr;

        }
    }
    return 0;
}
