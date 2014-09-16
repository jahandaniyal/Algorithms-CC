#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,K,e,pos;
    cin>>N;
    cin>>K;
   vector<int> v;
    for(int i=0;i<K;i++)
    {
        cin>>e;
        v.push_back(e);
    }
  sort (v.begin(), v.end());

vector<int>::iterator up;
    for(int i=K;i<N;i++)
    {
        cin>>e;
        pos= upper_bound (v.begin(), v.end(), e) -v.begin();
    if(pos!=K)
    if( ((e- v[pos-1])<(v[pos]-v[pos-1])) || ((v[pos]-e)<(v[pos+1]-v[pos])) )
        v[pos]=e;
    }

    cout<<(v[K-1]-v[0])<<endl;
    return 0;
}




/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,K,e,pos;
    cin>>N;
    cin>>K;
   // int myints[];
   // vector<int> v(myints,myints + sizeof(myints) / sizeof(int));
   vector<int> v;
    for(int i=0;i<K;i++)
    {
        cin>>e;
        v.push_back(e);
    }
  sort (v.begin(), v.end());


vector<int>::iterator up;
    for(int i=K;i<N;i++)
    {
        cin>>e;
       // cout<<"e : "<<e<<endl;
        pos= upper_bound (v.begin(), v.end(), e) -v.begin();
      // up= upper_bound (v.begin(), v.end(), e);
    if(pos!=K)
    if( ((e- v[pos-1])<(v[pos]-v[pos-1])) || ((v[pos]-e)<(v[pos+1]-v[pos])) )
    {
       // cout<<"swap : "<<v[pos]<<" with : "<<e<<endl;
        v[pos]=e;

    }

    }
  /*  for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';
*/
    cout<<(v[K-1]-v[0])<<endl;
    return 0;
}


*/
