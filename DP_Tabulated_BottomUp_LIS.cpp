/* Dynamic Programming implementation of LIS problem */
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;
/* lis() returns the length of the longest increasing subsequence in
    arr[] of size n */
int lis( int arr[], int n , int *parent)
{
   int *lis, i, j, max = 0 , prev=-1;
   lis = (int*) malloc ( sizeof( int ) * n );

   /* Initialize LIS values for all indexes */
   for ( i = 0; i < n; i++ )
      lis[i] = 1;

   /* Compute optimized LIS values in bottom up manner */
   for ( i = 1; i < n; i++ )
      for ( j = 0; j < i; j++ )
         if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;


   /* Pick maximum of all LIS values */
   for ( i = 0; i < n; i++ )
      if ( max < lis[i] )
         max = lis[i];
    int temp=max;
     for(int i=n-1;i>-1;i--)
    {
        if (temp == lis[i]){ parent[i]=arr[i]; temp--;}
    }


   /* Free memory to avoid memory leak */
   free( lis );

    //for(int i=0;i<n;i++) if(parent[i]!=-1 && prev!=parent[i]) {cout<<arr[parent[i]-1]<<"   "; prev=parent[i];}
    for(int i=0;i<n;i++) if(parent[i]!=-1) cout<<parent[i]<<"   ";
    cout<<endl;

   return max;
}

/* Driver program to test above function */
int main()
{
  int arr[] = { 8,6,5,1,9,3,7,4,2,10 };
  int n = sizeof(arr)/sizeof(arr[0]);
  int parent[n];
  for(int i=0;i<n;i++) parent[i] = -1;
  printf("Length of LIS is %d\n", lis( arr, n , parent) );

  //getchar();
  return 0;
}
