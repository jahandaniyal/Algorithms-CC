#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,N,temp;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int result=0;
        cin>>N;
        vector<int> posMouse;
        vector<int> posHole;
        /*int posMouse[N],posHoles[N];*/
        for(int j=0;j<N;j++){ cin>>temp;posMouse.push_back(temp);}
        for(int j=0;j<N;j++) {cin>>temp;posHole.push_back(temp);}
        sort (posMouse.begin(), posMouse.end());
        sort (posHole.begin(), posHole.end());
        for(int j=0;j<N;j++) posMouse[j] = abs(posMouse[j]-posHole[j]);
        result = *max_element(posMouse.begin(),posMouse.end());
        cout<<result<<endl;
    }
}
