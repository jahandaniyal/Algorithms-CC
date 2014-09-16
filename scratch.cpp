#include <iostream>
#include <algorithm>
#include <stdlib.h>
#define MAX 10000000000

using namespace std;

int check(long long int *arr, long long int pos)
{   long long int max = MAX;
    int sizeArr = sizeof(arr)/sizeof(long long int);
    if(pos==sizeArr-1) return 1;
    else if(arr[pos]==arr[pos+1]) check(arr,pos+1);
    else if (arr[pos]<arr[pos+1])
    {
        arr[pos]=max--;
        check(arr,pos+1);
    }
    else return 0;
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
        for(int j=0;j<N;j++)
        {
            count += check(arr,0);
        }



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
