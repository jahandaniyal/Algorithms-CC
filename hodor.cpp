#include <iostream>
using namespace std;

int main()
{
    int N,M;
    cin>>N;
    cin>>M;
    int sum=N,bonus=N,left=N;
    while(bonus>=M)
    {
        left=bonus%M;
    	bonus=bonus/M;
    	/*cout<<"Left : "<<left<<endl;
    	cout<<"Bonus : "<<bonus<<endl;
    	*/
    	sum+=bonus;
    	bonus +=left;
   // 	cout<<"Sum : "<<sum<<endl;
    }
    cout<<sum;
    return 0;
}
