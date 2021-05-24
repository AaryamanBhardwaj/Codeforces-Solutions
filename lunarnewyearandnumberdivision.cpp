#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,s=0,k=0,j=1,fs=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n/2;i++)
    {
        s=a[i]+a[n-j];
        k=s*s;
        fs=fs+k;
        j++;
    }
    cout<<fs;
}
