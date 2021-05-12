#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,t,min=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        min=1001;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++)
        cin>>s[i];
        sort(s,s+n);
        for(int i=0;i<n-1;i++)
        {
            if(abs(s[i]-s[i+1])<min)
            min=abs(s[i]-s[i+1]);
        }
        cout<<min<<endl;
    }
}
