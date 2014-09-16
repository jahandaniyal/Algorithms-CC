// expre_Bitwise_Exclusive_OR_Operator.cpp
// compile with: /EHsc
// Demonstrate bitwise exclusive OR
#include <iostream>
using namespace std;
int main() {
    int T;
    unsigned long long int N;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        unsigned long long int A[N],counter=0;
        for(unsigned long long int j=0;j<N;j++) cin>>A[j];
        for(unsigned long long int j=0;j<N;j++)
            for(unsigned long long int k=0;k<N && k!=j;k++)
            if(((A[j]^A[k])%2)!=0) counter++;

            cout  <<  counter << endl;
    }

      // prints "aaaa" pattern 1010 ...
}
