#include<iostream>

using namespace std;


/* A utility function that returns minimum of 3 integers */
int max(int x, int y, int z)
{
   if (x > y)
      return (x > z)? x : z;
   else
      return (y > z)? y : z;
}



/*int maxPath(int (&cost)[size_x][size_y], int m, int n)
{
    int tc[m][n],temp=0;
    for(int i=0;i<m;i++)
        tc[i][0] = cost[i][0];

    for(int i=0;i<m;i++)
        for(int j=1;j<n;j++)
        {
            if(j==0) tc[i][j] = max(tc[i][j-1],0,tc[i+1][j-1])+cost[i][j];
            else if(j==(n-1)) tc[i][j] = max(tc[i][j-1],tc[i-1][j-1],0)+cost[i][j];
            else
            tc[i][j] = max(tc[i][j-1],tc[i-1][j-1],tc[i+1][j-1])+cost[i][j];
        }
    for(int j=0;j<n;j++) if(tc[m-1][j]>temp) temp = tc[m-1][j];
}*/

int main()
{

    int T,N,M;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>M;
        cin>>N;
        int cost[M][N];
        for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            cin>>cost[i][j];


        /*
        MaxPathComputation
        */
        int m=M,n=N;
        int tc[m][n],temp=0;
    for(int i=0;i<m;i++)
        tc[0][i] = cost[0][i];
    for(int i=1;i<m;i++)
        for(int j=0;j<n;j++)
        {
            if(j==0) tc[i][j] = max(tc[i-1][j],0,tc[i-1][j+1])+cost[i][j];
            else if(j==m-1) tc[i][j] = max(tc[i-1][j],tc[i-1][j-1],0)+cost[i][j];
            else
            tc[i][j] = max(tc[i-1][j],tc[i-1][j-1],tc[i-1][j+1])+cost[i][j];
        }
    for(int j=0;j<n;j++) if(tc[m-1][j]>temp) temp = tc[m-1][j];
    cout<<endl<<endl<<endl;
   /* for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<tc[i][j]<<"  ";
        cout<<endl;
    }
*/

    cout<<temp<<endl;
    }
    return 0;
}
