#include<iostream>
#define R 3
#define C 3

using namespace std;

/* A utility function that returns minimum of 3 integers */
int min(int x, int y, int z)
{
   if (x < y)
      return (x < z)? x : z;
   else
      return (y < z)? y : z;
}

int minCost(int cost[R][C], int m, int n)
{
    int i,j,tc[R][C];
    tc[0][0] = cost[0][0];
    for(int i=1;i<=m;i++)
        tc[i][0] = tc[i-1][0] + cost[i][0];

    for(int i=1;i<=n;i++)
        tc[0][i] = tc[0][i-1] + cost[0][i];

    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        {
            tc[i][j] = min(tc[i-1][j],tc[i-1][j-1],tc[i][j-1]) + cost[i][j];
        }
        return tc[m][n];
}

int main()
{
    int cost[R][C] = { {1, 2, 3},
                      {4, 8, 2},
                      {1, 5, 3} };
    cout<<minCost(cost, 2, 2)<<endl;
    return 0;
}
