#include <iostream>
#include <stdlib.h>

using namespace std;
long long int mini(long long int,long long int,long long int);

int main()
{
   long long int N,K,sum=0;
    cin>>N;
    cin>>K;

    long long int arrx[K],arry[K];
    for(long long int i=0;i<K;i++) cin>>arrx[i];
    for(long long int i=0;i<K;i++) cin>>arry[i];

    for(long long int i=0;i<K;i++)
    {
        sum = sum + mini(arrx[i],arry[i],N);
    }

    cout<<sum;
    return 0;
}

long long int mini(long long int x, long long int y,long long int N)
{
    long long int temp=0,min1=1000000;
    long long int arrx[]={1,N,N,1};
    long long int arry[]={1,1,N,N};
    for(long long int i=0;i<4;i++)
    {
        temp = abs(arrx[i]-x)+abs(arry[i]-y);
       // cout<<"temp : "<<temp<<endl;
        if(temp<min1) min1=temp;
    }
    return min1;
}
