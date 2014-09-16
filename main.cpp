#include <iostream>
#include <cstring>
#include <cstdlib>
#include "stack.h"

using namespace std;

int main()
{

    //string and associated initialization for scanning the input
    string input;
    int input_size;

    //Some other necessary initializations etc.
    int testcase_count;
    int cnt=0;
    int i,j;

    //evaluation assisting variables
    float v1,v2,result;

    //initialized thr operand stack
    stack *s=new stack;

    //Read no of test cases
    cin>>testcase_count;

    //For each postfix expression that follows
    while(cnt < testcase_count)
    {
        //cin.getline(input,256);//read the current postfix string from stdin (standard input)

        getline(cin, input);

       input_size = input.length();//length of the read line

        cout<<endl<<input_size<<endl;
        //cout<<"-- "<<cnt<<"--"<<testcase_count<<endl;
        //s->makeEmpty();
        for(i=0;i < input_size; i++)
        {

            if(isspace(input[i])); //discarding the space characters in input since, input is space separated.

            else if(isdigit(input[i])) //since all input nums are single digit we can use this logic. ASCII '0'=48 and ASCII '9'=58.
            {
                v1=(float)(input[i]-48); //extracting the integer value form the character since '0'=48.
                s->push(v1);
            }

            else if(input[i]=='+')
            {
                v2=s->topPop();
                v1=s->topPop();
                result= v2 + v1; //simply pop two top elements repeatedly and use the encountered operand & push the result back on stack
                s->push(result); //Pussssshhhhhh it baccckkkk innnnn

            }
            else if(input[i]=='-')
            {
                v2=s->topPop();
                v1=s->topPop();
                result= v2 - v1;
                s->push(result);

            }
            else if(input[i]=='/')
            {
                v2=s->topPop();
                v1=s->topPop();
                result= v2 / v1;
                s->push(result);

            }
            else if(input[i]=='*')
            {
                v2=s->topPop();
                v1=s->topPop();
                result= v2 * v1;
                s->push(result);

            }
            else
            {
                cout<<endl<<"some grevious error has occurred on this post-fix expression"<<endl<<"ABORTING this & Moving on to next!";
                break;

            }


        }
        cout<<endl<<"Result";
        result=s->top();
        //cout<<"blah";
        cout<<endl<<result<<endl;
        //i=s->topPop(); //emptying the stack
        cnt++;
        //s->makeEmpty();
    }
    cout<<endl;
    return 0;
}




/* else if(input[i]=='+'||input[i]=='-'||input[i]=='/'||input[i]=='*')//if we find an operand what do we do *wink*
            {
                v2=s->topPop();
                v1=s->topPop();
                switch(input[i])
                {
                    case '+': result= v2 + v1; //simply pop two top elements repeatedly and use the encountered operand & push the result back on stack
                              s->push(result); //Pussssshhhhhh it baccckkkk innnnn
                              break;

                    case '-': result= v1 - v2;
                              s->push(result);
                              break;

                    case '/': result= v1 / v2;
                              s->push(result);
                              break;

                    case '*': result= v1 * v2;
                              s->push(result);
                              break;

                }


            }*/


















