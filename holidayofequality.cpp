#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    m=*max_element(a,a+n);
    for(int i=0;i<n;i++)
    s=s+(m-a[i]);
    cout<<s;
}