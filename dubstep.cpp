#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{ 
    string s;int j=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        //if(i>j)
        //cout<<" ";
        if(s.substr(i,3)=="WUB")
        {i=i+2;cout<<" ";;} 
        else
        {cout<<s[i];continue;}
        
        
    }
}