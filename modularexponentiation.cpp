#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(NULL);
    int s=0,n,m;
    cin>>n>>m;
    s=pow(2,n);
    cout<<m%s;
}