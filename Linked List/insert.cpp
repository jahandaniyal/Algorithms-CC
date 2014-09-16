#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
    int data;
    struct node *link;
};

struct node *insert (struct node *p, int n)
{
    struct node *temp;
    if(p==NULL)
    {
        p = (struct node *)malloc(sizeof(struct node));
        if(p==NULL)
        {
            cout<<"Error"<<endl;
            exit(0);
        }
        p->data = n;
        p->link = NULL;
    }
    else
        p->link = insert(p->link,n);
    return p;
}

void printlist (struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p = p->link;
    }
}


int main()
{
         int n;
         int x;
         struct node *start = NULL ;
         printf("Enter the nodes to be created \n");
         scanf("%d",&n);
         while ( n--> 0 )
         {
      printf( "Enter the data values to be placed in a node\n");
            scanf("%d",&x);
            start = insert ( start, x );
         }
         printf("The created list is\n");
         printlist ( start );
         return 0;
}
