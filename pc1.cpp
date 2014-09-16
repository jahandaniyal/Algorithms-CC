#include<iostream>

using namespace std;

int main()
{
    int n,m,i=0,temp,count=0,max=0;
    cin>>n;
    cin>>m;
    for(i=m; i>=n;i--)
    {
        temp=i;
        while(temp>1)
        {
            if(temp%2==0) temp/=2, count++; ///cout<<temp<<" "
            if(temp==1) break;
            if(temp%2!=0) temp=temp*3+1,count++;/// cout<<temp<<" "
        }
        if(count>max) max=count;
        count=0;
    }
        cout<<n<<" "<<m<<" "<<max+1;
return 0;
}
