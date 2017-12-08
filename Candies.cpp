#include<iostream>
using namespace std;
#define max 10000
int main()
{
    int array[max];
    int i=0,sum=0,count=0;
    while(array[i-1]!=-1)
    {
        cin>>array[i];
        i++;
    }
    for(int j=0;j<i;j++)
    {
        sum=sum+array[j];
    }
    float avg=sum/(i-1);
    for(int j=0;j<i;j++)
    {
        if(array[j]>avg)
            count=count+(array[j]-avg);
    }
    cout<<count<<"\n";
    if(sum%(i-1)!=0)
        cout<<"-1";
}
