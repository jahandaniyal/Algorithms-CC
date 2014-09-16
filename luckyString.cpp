#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    __int64 n,digits,len;
   // cin>>n;
    string st,s="45",temp="44";
 //   while(st.length()<n)
 st = s;
 len = s.length()-1;
 for(int i=0;i<4;i++)
    {

        cout<<"len a : "<<len<<endl;
      ///  cout<<len<<endl;
        if(len==0) {
                if(s.at(len)=='4') {
                        s.at(len)='5';
                    st=st+s;
                }
            temp = temp+"4";
            cout<<"Temp : "<<temp<<endl;
            len = temp.length()-1;
             st=st+temp;
             s=temp;
        }
        if(s.at(len)=='4') {
                s.at(len)='5';
        st=st+s;}
        else if(s.at(len)=='5') len--;


    }
    cout<<st;
    return 0;
}
