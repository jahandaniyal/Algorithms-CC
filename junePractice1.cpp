#include <iostream>
#include <string>
using namespace std;
#define upload "UPLOAD ANOTHER"
#define crop "CROP IT"
#define accept "ACCEPTED"


int main()
{
    int L,N,W,H;
    cin>>L;
    cin>>N;
    for(int i=0;i<N;i++)
    {
    	cin>>W;
    	cin>>H;
    	if(W<L || H<L) cout<<upload<<endl;
    	else (W==H)? cout<<accept<<endl : cout<<crop<<endl;
    }
    return 0;
}
