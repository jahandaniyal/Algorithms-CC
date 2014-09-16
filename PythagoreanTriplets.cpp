#include <iostream>
using namespace std;

int main()
{
    int T,N,n=2,m=1,a,b,c,counter,k;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        N++;
        counter=0;
        n=2;
        m=1;
        a= n*n-m*m;
        b=2*n*m;
        c=n*n+m*m;
        k=1;
        while(a<N && b<N && c<N)
        {
            //counter++;
            if(a*k<N && b*k<N && c*k<N)
            {
                counter++;
                k++;
                continue;
            }
            else {
                n++;
                m++;
                a= n*n-m*m;
                b=2*n*m;
                c=n*n+m*m;
            }

        }
         cout<<counter<<endl;
    }

    return 0;
}
