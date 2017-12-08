#include<stdio.h>
#include<iostream>
#include<string.h>
#define size 400

using namespace std;

char stack[size];
int tos=0,ele;
void push(int);
char pop();
char infix[400],output[400];
int prec(char);
int main()
{
int i=0,j=0,length;
char temp;
int t;
cin>>t;
while(t>0)
{
cin>>infix;
length=strlen(infix);
for(i=0;i<length;i++)
{
    if(infix[i]!='+' && infix[i]!='-' && infix[i]!='*' && infix[i]!='/' && infix[i]!='^' && infix[i]!=')' && infix[i]!='(' )
    {
    output[j++]=infix[i];
    }
    else
    {
        if(tos==0)
        {
        push(infix[i]);
        }
        else
        {
        if(infix[i]!=')' && infix[i]!='(')
        {
            if(    prec(infix[i]) <= prec(stack[tos-1])  )
            {
            temp=pop();
            output[j++]=temp;
            push(infix[i]);
            }
            else
            {
            push(infix[i]);
            }
            }
        else
            {
            if(infix[i]=='(')
            {
            push(infix[i]);
            }
            if(infix[i]==')')
            {
            temp=pop();
            while(temp!='(')
            {output[j++]=temp;
            temp=pop();}
            }
            }
            }
            }
}
while(tos!=0)
    {
    output[j++]=pop();
    }
    cout<<output<<"\n";
    t--;
}

}
void push(int ele)
{
    stack[tos]=ele;
    tos++;
}
char pop()
{
    tos--;
    return(stack[tos]);
}
int prec(char symbol)
{
if(symbol== '(')
return 0;
if(symbol== ')')
return 0;
if(symbol=='+' || symbol=='-')
return 1;
if(symbol=='*' || symbol=='/')
return 2;
if(symbol=='^')
return 3;
return 0;
}