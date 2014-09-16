#include <iostream>

using namespace std;

__int64 exp(__int64 x,int n)
{
    __int64 result=1;

    while(n)
    {
        if(n&1) result *=x;
        n=n>>1;
        x *=x;
    }
    return result;
}
int main()
{
  __int64 e;
  int n;

  ///  cin>>e;
   /// cin>>n;
    cout<<exp(100,30);
 return 0;

 }
