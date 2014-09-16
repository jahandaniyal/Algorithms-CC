#include <iostream>
using namespace std;

int main()
{
	int T;
	long long int N,L,B,area,half,q,max=0;
	cin>>T;
	L=1;

	for(int j=0;j<T;j++)
	{
		cin>>N;
		half=N/2;
		q=half/2;
		max=0;
		for(int i=1;i<q;i++)
		{
			B=half - i;
			area=i*B;
			if(area>max) max=area;
		}
		cout<<max;
	}
    return 0;
}
