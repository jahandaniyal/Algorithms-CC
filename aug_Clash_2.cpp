#include <iostream>

using namespace std;

long long int combi(int n)
{
    long long int ans=1;
    int k=3;
    if(n<3) return 0;
    k=k>n-k?n-k:k;
    int j=1;
    for(;j<=k;j++,n--)
    {
        if(n%j==0)
        {
            ans*=n/j;
        }else
        if(ans%j==0)
        {
            ans=ans/j*n;
        }else
        {
            ans=(ans*n)/j;
        }
    }
    return ans;
}

int main ()
{
    long long int N,sum=0,c1=0,c2=0,c3=0,c4=0;
    int count2[N],count3[N],count5[N],count7[N],flag[N],num[N];
    //bool c2=false,c3=false,c5=false,c7=false;
    cin>>N;
    int val[15];
    for(int i=0;i<15;i++)
        val[i]=0;
    string arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
        num[i]=0;
        bool c2=false,c3=false,c5=false,c7=false;
        for(int j=0;j<arr[i].length();j++)
        {
            if(!c2 && arr[i].at(j)=='2') {c2=true;num[i]+=2000;}//{count2[i]=1;}
            if(!c3 && arr[i].at(j)=='3') {c3=true;num[i]+=300;}//{count3[i]=1;}
            if(!c5 && arr[i].at(j)=='5') {c5=true;num[i]+=50;}//{count5[i]=1;}
            if(!c7 && arr[i].at(j)=='7') {c7=true;num[i]+=7;}//{count7[i]=1;}
        }
    }
    for(int i=0;i<N;i++)
    {
        switch(num[i])
        {
            case 2357 : val[0]+=1;
            break;
            case 2350 : val[1]+=1;
            break;
            case 2307 : val[2]+=1;
            break;
            case 2057 : val[3]+=1;
            break;
            case 0357 : val[4]+=1;
            break;
            case 2300 : val[5]+=1;
            break;
            case 0057 : val[6]+=1;
            break;
            case 2007 : val[7]+=1;
            break;
            case 2050 : val[8]+=1;
            break;
            case 0350 : val[9]+=1;
            break;
            case 0307 : val[10]+=1;
            break;
            case 2000 : val[11]+=1;
            break;
            case 0300 : val[12]+=1;
            break;
            case 0050 : val[13]+=1;
            break;
            case 0007 : val[14]+=1;
            break;
        }

    }
    for(int i=0;i<15;i++)
    {
        cout<<"Val "<<i<<" : "<<val[i]<<endl;
        sum += combi(val[i]);
    }
    //sum = combi(count2)+combi(count3)+combi(count5)+combi(count7);
    cout<<"Sum : "<<combi(5)<<endl;
    return 0;
}
