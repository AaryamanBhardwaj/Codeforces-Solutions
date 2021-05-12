#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,c,mishka=0,chris=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m>>c;
        if(m>c)
        mishka++;
        if(m<c)
        chris++;
    }
    if(mishka>chris)
    cout<<"Mishka";
    if(mishka<chris)
    cout<<"Chris";
    if(mishka==chris)
    cout<<"Friendship is magic!^^";
}
