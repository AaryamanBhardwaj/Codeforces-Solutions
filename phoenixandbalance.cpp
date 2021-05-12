#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;long long sum,subsum;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        sum=0,subsum=0;
        cin>>n;
        for(int i=n/2;i<n;i++)
        {
            sum=sum+pow(2,i);
        }
        for(int i=1;i<n/2;i++)
        {
            subsum=subsum+pow(2,i);
        }
        cout<<subsum+pow(2,n)-sum<<endl;
    }
}