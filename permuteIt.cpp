#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long long int N,M=1000000000+7,ans;

	long long int k=N;
for(int j=0;j<t;j++)
{
    cin>>N;
    ans=1;
    k=N;
for(int i=2;i<=2*N;i++) {

	ans=((i%M) * (ans%M) )%M;
	if(i%2==0 && k>0) {
		ans /=2;
		k--;
	}
    //cout<<ans<<"\t";

}
cout<<ans<<endl;
}
    return 0;
}
