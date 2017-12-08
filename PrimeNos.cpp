#include<iostream>
#include<math.h>
using namespace std;

int isPrime(int n)
{
	int i;
	if(n==1)
	return 0;
	if(n==2)
	return 1;
	for(i=2;i<(sqrt(n)+1);i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;

}
int main()
{
	int t;
	long m,n,i;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		for(i=m;i<=n;i++)
		{
			if(isPrime(i))
			{
				cout<<i<<endl;
			}
		}
		cout<<endl;
	}
}
