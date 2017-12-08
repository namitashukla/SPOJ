#include<iostream>
using namespace std;

int main()
{
    int t,m,n;
    cin>>t;
    while(t>0)
    {
        cin>>m>>n;
        if(m==n)
        {
            if(m%2==0)
                cout<<m+n<<"\n";
            else
                cout<<m+n-1<<"\n";
        }
        else
        {
        if(m-n==2)
        {

            if(m%2==0&&n%2==0)
                cout<<m+n<<"\n";
            if(m%2==1&&n%2==1)
                cout<<m+n-1<<"\n";

        }
        else
        {
            cout<<"No Number"<<"\n";
        }
        }
        t--;
    }
    return 0;
}
