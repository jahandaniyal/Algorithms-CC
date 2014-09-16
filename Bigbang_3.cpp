#include<iostream>
#include<string.h>

using namespace std;

int search(string pat, string txt)
{
    int M = (pat.length());
    int N = (txt.length());

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        int j;

        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
        {
            if (txt[i+j] != pat[j])
                break;
        }
        if (j == M)  // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        {
           return 1;
        }
    }
    return 0;
}

/* Driver program to test above function */
int main()
{
    int N,Q,x,y,count=0;
    cin>>N;
    string arr[N],st;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    cin>>Q;
    for(int i=0;i<Q;i++)
    {
        count=0;
        cin>>x;
        cin>>y;
        cin>>st;
        for(int j=x-1;j<y;j++) count += search(st,arr[j]);
        cout<<count<<endl;
    }

/*
   string txt = "AABAACAADAABAAABAA";
   string pat = "AABA";
   search(pat, txt);
*/
   return 0;
}
