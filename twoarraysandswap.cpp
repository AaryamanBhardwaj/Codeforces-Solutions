#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(NULL);
    int t,k,n,j=0,s=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {j=0;s=0;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    while(k--)
    {
        a[j]=max(a[j],b[j]);
        j++;

    }
    for(int i=0;i<n;i++)
    s=s+a[i];
    cout<<s<<endl;
    }
}