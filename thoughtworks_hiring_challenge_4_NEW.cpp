#include <iostream>
#include <algorithm>
#define MAX 999999

using namespace std;

int main ()
{
    int T,N,K;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        cin>>K;
        int arr[N],deleteFriend=0,pos=1,k=0;
        for(int j=0;j<N;j++)
            cin>>arr[j];
        for(int j=0;j<K;j++)
        {
            pos=1;
            k=0;
            while(k<N && pos<=N)
            {
                if(arr[k]!=MAX && arr[pos]==MAX) pos++;
                else if(arr[k]<arr[pos]&&arr[pos]!=MAX)
                {
                    arr[k]=MAX;
                    deleteFriend = 1;
                    break;
                }
                else {pos++;k++;}
            }
        }
         if(deleteFriend==0) arr[N-1]=MAX;
         for(int j=0;j<N;j++) if(arr[j]!=MAX) cout<<arr[j]<<" ";
         cout<<endl;
    }
    return 0;
}
