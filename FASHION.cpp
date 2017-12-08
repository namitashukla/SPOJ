#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    short men[1000], women[1000];
    int t,a;
    cin>>a;
    while(a!=0)
{
    int sum=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>men[i];
    }
    for(int i=0;i<t;i++)
    {
        cin>>women[i];
    }
    sort(men, men+t);
    sort(women,women+t);

    for(int i=0;i<t;i++)
    {
        sum+=women[i]*men[i];
    }
    cout<<sum<<"\n";
    a--;
}

}
