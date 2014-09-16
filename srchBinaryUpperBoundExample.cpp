// lower_bound/upper_bound example
#include <iostream>     // std::cout
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>       // std::vector

using namespace std;
int main () {
  int myints[] = {10,100,300,200,1000,20,30};

  vector<int> v(myints,myints + sizeof(myints) / sizeof(int));
  sort (v.begin(), v.end());

for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';


  vector<int>::iterator up;
  for(int i=K;i<N;i++)
  {
    up= upper_bound (v.begin(), v.end(), v[i]);
    if( v[i]- v[i-1]) > (v[])
  }



  cout << "upper_bound at position " << (up - v.begin()) << '\n';

  return 0;
}
