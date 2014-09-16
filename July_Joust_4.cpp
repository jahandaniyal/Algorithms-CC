#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    long long int N,Q,x,y;
    cin>>N;
    long long int arr[N];
    for (long long int i=0;i<N;i++)
        cin>>arr[i];
    cin>>Q;
    for (long long int i=0;i<Q;i++)
    {
        cin>>x;
        cin>>y;
        cout<<arr[(long long int)floor(x+y/2)-1]<<endl;
    }

}
