#include<iostream>
using namespace std;
int main()
{
    int t;
    long n,count=0;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        for (long i=5; n/i>=1; i *= 5)
          {
              count += n/i;
          }
          cout<<count<<"\n";
          count=0;

        t--;
    }

}
