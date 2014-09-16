#include <iostream>
#include <algorithm>
#include <stdlib.h>
#define MAX 10000000000

using namespace std;

int check(long long int *arr,long long int x, long long int pos,int sizeArr)
{   long long int max = MAX;
   // cout<<"Size of Array : "<<sizeArr<<endl;
    if(pos== sizeArr-1) {cout<<"END REACHED"<<endl;return 1;}
    else if(arr[x]==arr[pos+1] && arr[x]!=MAX && arr[pos+1]!=MAX) {x=pos;check(arr,x,pos+1,sizeArr);}
    else if (arr[x]<arr[pos+1] && arr[x]!=MAX && arr[pos+1]!=MAX)
    {
        cout<<"POS : " <<pos<<endl;
        arr[pos]=MAX;
        x=pos;
        check(arr,x,pos+1,sizeArr);
    }
    else pos++;
}
int compute(long long int *arr, long long int x, long long int pos, long long int sizeArr)
{
    if(x==sizeArr-1) {arr[pos-1]=MAX;cout<<"END REACHED"<<endl;return 1;}
    if(arr[x]==arr[pos] && arr[pos]!=MAX) {cout<<"X : " << x << " POS : "<<pos<<"  "<<arr[x]<<"  "<<arr[pos]<<endl;compute(arr,x,pos+1,sizeArr);}
    else if (arr[x]<arr[pos] && arr[pos]!=MAX) {cout<<"X : " << x << " POS : "<<pos<<"  "<<arr[x]<<"  "<<arr[pos]<<endl;arr[x]=MAX;x=pos; compute(arr,x,pos+1,sizeArr);}
    else if(arr[x]!=MAX && arr[pos]==MAX) {cout<<"X : " << x << " POS : "<<pos<<"  "<<arr[x]<<"  "<<arr[pos]<<endl;compute(arr,x,pos+1,sizeArr);}
}
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	int T;
	long long int N,X,temp;


	cin>>T;
	for(int i=0;i<T;i++)
    {
        cin>>N;
        long long int arr[N],count=0;
        for(int j=0;j<N;j++)
        {
            cin>>temp;
            arr[j]=temp;
        }
       // sort(arr.begin(),arr.end());
        qsort (arr, N, sizeof(long long int), compare);
        int sizeArr = sizeof(arr)/sizeof(long long int);
        cout<<"Size : " <<sizeArr<<endl;
        for(int j=0;j<N;j++)
        {
            if(arr[j]!=MAX) {cout<<"J : "<<j<<"arr - "<<arr[j]<<endl;compute(arr,j,j+1,sizeArr);}
        }

        for(int j=0;j<N;j++)
            if(arr[j]!=MAX) count++;

		cout<<"________Count______________ "<< count<<endl;
    for(int j=0;j<N;j++) cout<<' ' << arr[j];
    cout<<endl;
	  /*  for (vector<long long int>::iterator it = arr.begin() ; it != arr.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';
*/

    }


    return 0;
}
