/* Dynamic Programming implementation of LCS problem */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;

int max(int a, int b);

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( char *X, char *Y, int m, int n )
{
   int L[m+1][n+1];
   int i, j;

   /* Following steps build L[m+1][n+1] in bottom up fashion. Note
      that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;

       else if (X[i-1] == Y[j-1])
         {L[i][j] = L[i-1][j-1] + 1; cout<<"X[i-1] : X["<<i-1<<"] : "<<X[i-1]<<" Y[j-1] : X["<<j-1<<"] : "<<Y[j-1]<<endl; cout<<L[i][j]<<endl;}

       else
         {L[i][j] = max(L[i-1][j], L[i][j-1]);cout<<"X[i-1] : X["<<i-1<<"] : "<<X[i-1]<<" Y[j-1] : X["<<j-1<<"] : "<<Y[j-1]<<endl; cout<<L[i][j]<<endl;}
     }
   }
   int index=L[m][n];
   char result[index+1];
   result[index]='\0';
    // Start from the right-most-bottom-most corner and
   // one by one store characters in lcs[]
   i = m, j = n;
   while (i > 0 && j > 0)
   {
      // If current character in X[] and Y are same, then
      // current character is part of LCS
      if (X[i-1] == Y[j-1])
      {
          result[index-1] = X[i-1]; // Put current character in result
          i--; j--; index--;     // reduce values of i, j and index
      }

      // If not same, then find the larger of two and
      // go in the direction of larger value
      else if (L[i-1][j] > L[i][j-1])
         i--;
      else
         j--;
   }

   // Print the lcs
   cout << "LCS of " << X << " and " << Y << " is " << result<<endl; /*X[0..n-1] and Y[0..m-1] */
   return L[m][n];
}

/* Utility function to get max of 2 integers */
int max(int a, int b)
{
    return (a > b)? a : b;
}

/* Driver program to test above function */
int main()
{
  char X[] = "AGGTAB";
  char Y[] = "GXTXAYB";

  int m = strlen(X);
  int n = strlen(Y);

  printf("Length of LCS is %d\n", lcs( X, Y, m, n ) );

  //getchar();
  return 0;
}
