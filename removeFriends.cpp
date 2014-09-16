#include <iostream>
#include <algorithm>
#define MAX 999999

using namespace std;

int main ()
{
    int T,N,K,curr,next=0,temp;
    cin>>T;
    for(int i=0;i<T;i++)
    {

        cin>>N;
        cin>>K;
        cin>>curr;
        int arr[N],deleteFriend=0,pos=1,k=0;
        arr[0]=curr;
        arr[1]=0;
        cout<<"arr[0] : "<<arr[0]<<endl;
        for(int j=1;j<N;j++)
        {
            cin>>next;
            deleteFriend=0;
          //  cout<<"Pos : "<<pos<<" K : "<<K<<endl;
            arr[pos]=next;
           /* if(arr[pos]>arr[pos-1] && K>0)
            {
                //cout<<"BEFORE : arr[pos] : "<<arr[pos]<<"  arr[pos-1] : "<<arr[pos-1]<<endl;
                deleteFriend=1;
                arr[pos-1]=next;
                arr[pos]=0;
                pos--;
                K--;
                //cout<<"arr[pos] : "<<arr[pos]<<"  arr[pos-1] : "<<arr[pos-1]<<endl;
            }
            */
            while(arr[pos]>arr[pos-1] && pos>0)
            if(pos!=0 && arr[pos]>arr[pos-1] && K>0)
            {
            //    cout<<"+BEFORE : arr[pos] : "<<arr[pos]<<"  arr[pos-1] : "<<arr[pos-1]<<endl;
                deleteFriend=1;
                K--;
                arr[pos-1]=arr[pos];
                arr[pos]=0;
                pos--;
              //  cout<<"+arr[pos] : "<<arr[pos]<<"  arr[pos-1] : "<<arr[pos-1]<<endl;
            }
                pos++;
            /*    cout<<"After "<<endl;
                 for(int i=0;i<pos;i++) cout<<arr[i]<<" ";
        cout<<endl;*/
        }
        if(deleteFriend==0 && K>0) arr[pos-1]=0;
        for(int i=0;i<pos && i<N;i++) if(arr[i]!=0) cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
