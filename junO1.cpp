#include <iostream>
using namespace std;

#define boy 1
#define girl 5

int main()
{
    int T,N,b,g,b1,g1;
    cin>>T;
    int flag=0;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        int arr[N];
        cin>>b;
        cin>>g;
        b1=b;
        g1=g;
        flag=0;
        for(int k=0;k<2;k++)
        {
            //flag=0;
            b=b1;
            g=g1;
            int jhool=0,teacher=0;
        if(k==0)arr[0]=boy,b--;
        else arr[0]=girl,g--;
        for(int j=0;j<N;)
        {
            if(arr[j]==boy){if(g>0)(arr[j+1]=girl,g--); else if(b>0) arr[j+1]=boy,b--;}
            else { if(b>0)(arr[j+1]=boy,b--); else if(g>0) arr[j+1]=girl,g--;}
            j++;
            if(arr[j]==boy) {if(b>0)arr[j+1]=boy,b--; else if(g>0) arr[j+1]=girl,g--;}
            else {if(g>0) arr[j+1]=girl,g--; else if(b>0) arr[j+1]=boy,b--;}
            j++;
        }
        for(int j=1;j<N;j++) (arr[j]==arr[j+1])? (jhool++) : (teacher++);
        if(jhool>teacher) {cout<<"Little Jhool wins!"<<endl; flag=1;break;}
        }
        if(flag==0)cout<<"The teacher wins!"<<endl;
    }


    return 0;
}
