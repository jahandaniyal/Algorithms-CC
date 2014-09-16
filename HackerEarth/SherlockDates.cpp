#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    int T,day,year,isLeapYear,pos;
    cin>>T;
    string month,date;
    char buffer [33];
    string months[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<T;i++)
    {
    cin>>day;
    cin>>month;
    cin>>year;
    if(year<1600 || year>2000) continue;
   	isLeapYear = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
    if(isLeapYear) days[1] = 29;
    for(int j=0;j<12;j++)if(months[j]==month) {pos=j;break;}
    if(day>1) cout<<day-1<<" "<<months[pos]<<" "<<year<<endl;
    if(day==1 && pos>0) cout<<days[pos-1]<<" "<<months[pos-1]<<" "<<year<<endl;//(date = "" + (days[pos-1])+" "+ months[pos-1] +" "+ year);
    if(day==1 && pos==0) cout<<days[11-pos]<<" "<<months[11-pos]<<" "<<year-1<<endl;//(date = "" + (days[12-pos])+" "+ months[12-pos] + " "+ (year-1));

    //cout<<day<<month<<year<<endl;
    }
    return 0;
}

