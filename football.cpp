#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{ 
    string s;int c=0,k=0;
    cin>>s;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
            if(c==6)
            {
                cout<<"YES";
                k=c;
                break;
            }
        }
        else
        c=0;
    }
    if(k!=6)
    cout<<"NO";
}
