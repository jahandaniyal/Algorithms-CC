#include <iostream>
#include <string>

using namespace std;

int main()
{
    char arr[] = {'Q','W','E','R','T','Y','U','I','O','P','[',']'};
    string st,p;
    p = "QWERTYUIOP[]\ASDFGHJKL;ZXCVBNM,./";
    cin >>st;
    for(int i=0;i<st.length();i++)
    {
        if(st.at(i)=='Q' || st.at(i)=='A' || st.at(i)=='z') continue;
        st.at(i) = p.at(p.find(st.at(i))-1);
    }
    cout<<st<<endl;
    return 1;
    }
