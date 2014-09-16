#include <iostream>
using namespace std;
int main()
{
    int T,Z,N;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>Z;
        cin>>N;
        int flag=0,temp=Z,in;
        for(int j=0;j<N;j++)
        {
            cin>>in;
            if((Z&in)<Z) Z=Z&in;
            if(Z==0) {flag=1; cout<<"Yes"<<endl; break;}
        }
        if(!flag) cout<<"No"<<endl;
    }
    return 0;
}
