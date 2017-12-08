#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i,j,n,cnt=0;
    cin>>n;

    //    counting no. of rectangles
    for(i=1;i<=sqrt(n);i++)
       {
           for(j=i+1;i*j<=n;j++)
            cnt++;
       }

    //    counting no. of squares
    cnt+=sqrt(n);
    cout<<cnt;
    return 0;
}
