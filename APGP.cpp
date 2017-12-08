#include<iostream>
using namespace std;
int main()
{
    long a,b,c;
    do
    {
        cin>>a>>b>>c;
        if(a!=0||b!=0||c!=0)
        {
        if((b-a)==(c-b))
        {
            cout<<"AP "<<(c+c-b)<<"\n";
        }
        else if((b/a)==(c/b))
        {
            cout<<"GP "<<((c/b)*c)<<"\n";
        }
        }
    }while(a!=0||b!=0||c!=0);
    return 0;
}
