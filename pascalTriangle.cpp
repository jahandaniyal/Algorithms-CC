#include<iostream>

using namespace std;

void printPascal(int n)
{
  for (int line = 1; line <= n; line++)
  {
    int C = 1;  // used to represent C(line, i)
    for (int i = 1; i <= line; i++)
    {
      cout<<C;  // The first value in a line is always 1
      C = C * (line - i) / i;
    }
    cout<<" "<<endl;;
  }
}

int main()
{
printPascal(5);
return 0;
}
