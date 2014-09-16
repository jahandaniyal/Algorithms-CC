#include<iostream>

using namespace std;

 double square(double n) {return n*n;}
long long int quickexp(long long int base, long long int power)
{
    if(power==0) return 1;
    else if(power%2==0) return square(quickexp(base,power/2));
    else return base * (quickexp(base,power-1));
}

int main()
{
    long long int A,B,C,D,r;
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>A;
        cin>>B;
        cin>>C;
        cin>>D;
        if(A>C && A%C==0 && b-d>0) cout<<"Divisible"<<endl;
        else if(A%C!=0 && A>C && b-d>0)  cout<<"Not divisible"<<endl;
        r = A/B;

    }
    return 0;
}
