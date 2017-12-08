#include<iostream>
using namespace std;

int main()
{
    long n,ans;
    do
    {
        cin>>n;
        ans=(n*(2*n+1)*(n+1))/6;
        if(n>0)
        cout<<ans<<"\n";

    }
    while(n>0);
}
