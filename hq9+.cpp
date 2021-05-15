#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{ 
    string p;int c=0;
    cin>>p;
    for(int i=0;i<p.length();i++)
    {
        if(p[i]=='H'||p[i]=='Q'||p[i]=='9')
        {
            c=1;
            cout<<"YES";
            break;
        }
    }
    if(c==0)
    cout<<"NO";
}
