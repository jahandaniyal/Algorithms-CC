#include<iostream>
#include<string>

using namespace std;

int main()
{
    int64_t n,m,s;
    int64_t result=0;
    cin>>n;
    cin>>m;
    cin>>s;
    cout<<"N : "<<n<<endl;
    cout<<"M : "<<m<<endl;
    cout<<"S : "<<s<<endl;
    if(m>=n) result=((s%n)+(m%n)-1)%n;
    else if(m<n) result= ((s%n) +m-1)%n;

cout<<result<<endl;

    return 0;
}
