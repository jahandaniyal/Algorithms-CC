
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,K,e,pos,minimize,temp,max,min;
    cin>>N;
    cin>>K;

   vector<int> v;
    for(int i=0;i<K;i++)
    {
        cin>>e;
        v.push_back(e);
    }
  //sort (v.begin(), v.end());
    min = *(min_element(v.begin(),v.end()));

//vector<int>::iterator up;
    for(int i=K;i<N;i++)
    {
        minimize = *max_element(v.begin(),v.end())-min;
        cin>>e;
        //cout<<"e : "<<e<<endl;

        max = *(max_element(v.begin(),v.end()));
        //cout<<" Max : "<<max<<endl;
        temp = max;
        replace (v.begin(), v.end(), max, e);
         max = *(max_element(v.begin(),v.end()));
        //cout<<" Max after replacement : "<<max<<endl;

        if((max-min)>=(minimize)) replace (v.begin(), v.end(), e, temp);
        /*
        else
                cout<<"swap : "<<max<<" with : "<<e<<endl;
        for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';
            */
    }
  /*  for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';
*/
    cout<<(*(max_element(v.begin(),v.end()))-min)<<endl;
    return 0;
}
