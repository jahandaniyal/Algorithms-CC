#include <iostream>
using namespace std;

int main()
{
	int t,n,q,x,y,temp;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		int arr[n];
		for(int j=0;j<n;j++) cin>>arr[j];
		cin>>q;
		for(int j=0;j<n;j++) cout<<arr[j]<<" ";
		for(int j=0;j<q;j++)
		{
			cin>>x;
			cin>>y;
			temp=arr[y-1];
			cout<<"Temp : "<<temp<<endl;
			while(x>temp)
			{
				if(x!=temp)
				temp=arr[temp];

				else if(x<=temp)
				{
					temp=-1;
					break;
				}
				cout<<temp<<endl;
			}
			cout<<temp<<endl;
		}
	}
    cout << "Hello World!" << endl;
    return 0;
}
