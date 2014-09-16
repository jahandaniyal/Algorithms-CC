#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
    long long int N,sum=0;
    cin>>N;
    long long int arrS[N],arrC[N];
    for(long long int i=0;i<N;i++)
        cin>>arrS[i];
    for(long long int i=0;i<N;i++)
        cin>>arrC[i];
    qsort (arrS, N, sizeof(long long int), compare);
    qsort (arrC, N, sizeof(long long int), compare);
    for(long long int i=0;i<N;i++)
        sum += arrS[i]*arrC[i];
    cout<<sum<<endl;
    return 0;
}
