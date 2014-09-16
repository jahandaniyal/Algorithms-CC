#include <iostream>
#include <string>

using namespace std;

int max(int a, int b);


int main()
{
    string st;

    int a,b,k;
    int max;
    cin>>a;
    cin>>b;

    k = a-b;
    k %= 2147483647;
    cout<<"K : "<<k<<endl;
   /* while(a!=1 && b!=1)
    {
        cout<<"Press 1 to exit!"<<endl;
        cin>>b;
        a=max(a,b);
    }
    cout<<"Max number is : "<<a<<endl;
    */
    max = a - (((a-b)>>31)&0x1)*(a-b);

    //a = ~0b0001;
    cout<<max<<endl;
    return 1;
}

 int max(int a, int b)
 {
     int k,c;
     k=a-b;
     c= ~(k*0x01);
     return (a - k*c);
 }
