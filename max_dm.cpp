#include<stdio.h>
#include <iostream>
using namespace std;

int maximum(int a,int b)
{
int max,k,d;
d=(a-b)*10+3;
k=((d+1)/d);
max=b-k*(b-a);
cout<<max<<endl;
return max;
}

int great(int a,int b)
{
int s=(a-b)>>31;
return((a&~s)|(b&s));
}
int greater1(int a,int b)
{
	int s=(a-b)>>31;
	return((a&~s)|(b&s));
}
int main()
{
    int max;
    int arr[100] = {93073252,41818848,52050774,50899561,21161096,91097241,50516239,91352402,29256406,
    40975992,29836458,64621549,52044541,28766968,34382081,83387005,54544899,91103780,25792272,50277377,
    13344019,78359868,42582134,54674173,48043506,60560743,20770873,25425580,74895235,68752170,38261925,89394814,
    34798850,18580409,41236873,63017662,54577488,64615785,42966236,19528424,52231875,29087609,11140757,28225842,
    72929090,36445016,66557114,43088449,99999998,34514298,60241716,64095022};


    for(int i=0;i<99;i++)
    {
        max =maximum(arr[i], max);
   // max = great(arr[i], max);
///max = greater1(arr[i], max);
    }
printf("\n\nMaximum of all the numbers you entered is:%d",max);
}
