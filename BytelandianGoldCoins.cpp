#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
map <int, long long> dp;

long long convert(long long n)
{
    long long sum;
    if(n==0)
        return 0;

   if(dp[n]!=0)
        return dp[n];

   sum=convert(n/2) + convert(n/3) + convert(n/4);
   if(sum>n)
    dp[n]=sum;
   else
    dp[n]=n;

   return dp[n];

}

int main()
{
    long long n;
    while(scanf("%ll",&n==1))
    {
        printf("%ll",convert(n));
    }
    return 0;
}
