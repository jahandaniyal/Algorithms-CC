#include <iostream>
#define MAX 10
using namespace std;

void push(int stack[], int *top, int value);
int pop(int stack[], int *top);

int main()
{
    int stack[10]={0},value,top=-1;
    push(stack,&top,5);
    push(stack,&top,3);
    push(stack,&top,1);
    cout<<pop(stack,&top)<<endl;
    cout<<pop(stack,&top)<<endl;
    cout<<pop(stack,&top)<<endl;
    return 0;
}

void push(int stack[], int *top, int value) {

    if(*top<MAX)stack[++(*top)] = value;
    else cout<<"The stack is full can not push a value\n"<<endl;
}

int pop(int stack[],int *top)
{
    int value;
    if(*top>=0) value = stack[(*top)--];
    else cout<<"The stack is empty can not pop a value\n"<<*top<<endl;
    return value;
}
