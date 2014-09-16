#include <iostream>
using namespace std;

int main()
{
	int T,N,S,R,index,value,sum=0,max1=0,temp=0;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>N;
		sum=0;
		int arr[N];
		for(int j=0;j<N;j++) arr[j]=0;
		for(int j=0;j<N;j++)
		{
			cin>>index;
			cin>>value;
	//		cout<<"Index : " <<index<<endl;
		//	cout<<"Value : "<<value<<endl;
			if(value==1) arr[index]=value;
			cout<<"Arr["<<j<<"] : "<<arr[j]<<endl;
			if(value && arr[index]==0) {temp++;
			max1=temp;}
			else temp=0;

		}
	/*	max=0;
		sum=0;
		for(int j=1;j<N;j++)
		{
			if(arr[j])
			{
				sum++;
				if(sum>max) max=sum;
			}
			else sum=0;
		}*/
		cout<<max1<<endl;
	}

    cout << "Hello World!" << endl;
    return 0;
}
