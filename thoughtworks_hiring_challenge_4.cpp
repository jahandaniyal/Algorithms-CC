#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <math.h>
#define MAX 999999

using namespace std;

int main()
{
    int T,N,K;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        cin>>K;
        //int arr[N],deleteFriend=0;
        vector<int> arr(N);
        int deleteFriend=0,temp;
        for(int j=0;j<N;j++)
          {
              cin>>temp;
              arr.push_back(temp);
          }
        for(int j=0;j<K;j++)
        {
            for(int k=0;k<N;k++)
            {
                if(arr[k]<arr[k+1])
                {
                    arr.erase(arr.begin()+k);
                    deleteFriend = 1;
                    break;
                }
            }
        }
        if(deleteFriend==0) arr.erase(arr.begin()+N-1);
        for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
            cout << *it<<" ";
        cout <<endl;
    }

}
