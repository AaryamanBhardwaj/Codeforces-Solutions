#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    if((n*3)-k>0)
    cout<<(n*3)-k;
    else
    cout<<0;
}