#include<iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{

/*string st;
getline(cin,st);
cout<<st<<endl;*/
int n=36789,mx,v=1,count1=0,x=1,modValue,found;
cin>>n;
char buffer [33];
cout<<2137198%1<<endl;
string str;          //The string
  //temp as in temporary

//n=10000000;
for(int i=1;i<n;i++)
{
    ostringstream temp;
    temp<<i;
    str=temp.str();      //str is temp as string
   // cout<<str<<endl;
    if((found=str.find("2"))!=string::npos || (found=str.find("3"))!=string::npos || (found=str.find("5"))!=string::npos || (found=str.find("7"))!=string::npos ) count1++;
}
cout<<count1<<endl;
return 0;
}
