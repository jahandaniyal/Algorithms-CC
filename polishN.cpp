#include<stdio.h>
#include<conio.h>

int maximum(int a,int b)
{
int max,k,d;
d=(a-b)*10 + 3;
k=((d+1)/d);
max=b-k*(b-a);
return max;
}

int main()
{
char ch;
int max,a;

printf("Enter a number:");
scanf("%d",&max);

loop:
printf("\nPlease press 1 to continue:");
ch=getche();

switch(ch)
{
case '1':printf("\n");
printf("\nEnter a number:");
scanf("%d",&a);
max=maximum(max,a);
goto loop;

default: goto out;
}

out:
printf("\n\nMaximum of all the numbers you entered is:%d",max);
return 0;
}
