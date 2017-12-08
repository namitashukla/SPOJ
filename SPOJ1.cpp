#include <iostream>
#include<math.h>
#include<string.h>
using namespace std;


int main()
 {
    int t,m,n,flag=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>m>>n;
        for(int j=m;j<=n;j++)
        {

            bool prime[j+1];
            memset(prime, true, sizeof(prime));

            for (int p=2; p*p<=j; p++)
            {
            // If prime[p] is not changed, then it is a prime
            if (prime[p] == true)
            {
            // Update all multiples of p
            for (int k=p*2; k<=j; k += p)
                prime[k] = false;
            }


            }
            if(prime[j]==true)
               {
                cout<<j;
                cout<<"\n";
               }
    }
    }
return 0;

}
