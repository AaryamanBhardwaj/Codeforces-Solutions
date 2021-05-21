#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    //cout.tie(NULL);
    int  k,n,c=0;float s=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    if(round(s/n)==k)
    {
        cout<<0;
        return 0;
    }
    else
    {
        while(round(s/n)!=k)
        {
            s=s+k;
            n=n+1;
            c++;
        }
        cout<<c;
    }
    return 0;
}