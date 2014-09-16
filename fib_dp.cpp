#include <iostream>

using namespace std;

long fib(int n)
{
int i;
long sec_last=0,last=1; /* last two values of f[n] */
long next; /* placeholder for sum */
if (n > 0)cout<<"0"<<endl;
if(n>1) cout<<"1"<<endl;
for (i=2; i<n; i++) {
next = last+sec_last;
sec_last= last;
last= next;
cout<<last<<endl;
}
return(sec_last+last);
}

int main()
{
int n;
cin>>n;
fib(n);
return 0;
}
