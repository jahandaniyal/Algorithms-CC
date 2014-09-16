#include<iostream>

using namespace std;

int main()
{
    long long int N,M,sum,temp;
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        long long int arr[N];
        sum=0,temp=0;
        for(long long int j=0;j<N;j++) {cin>>arr[j]; sum +=arr[j]; cout<<"Sum : "<<sum<<endl;}
        cin>>M;
        temp = M-sum;
        cout<<"Temp : "<<temp<<endl;
        if(temp>0) {M=M%sum;cout<<"M : "<<M<<endl;}
        else if(temp==0) {cout<<N<<endl; continue;}
            for(long long int j=0;j<N;j++)
            {
                if(M>arr[j]) M=M-arr[j];
                else {cout<<j+1<<endl;break;}
            }
    }
    return 0;
}
