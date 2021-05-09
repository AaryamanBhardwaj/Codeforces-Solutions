#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;string s,str="";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        str="";
        cin>>s;
        for(int i=1;i<s.length();i++){
    if(s[i]==s[i+1])
    {str=str+s[i];i=i+1;}
    else str=str+s[i];
        }
        cout<<s[0]+str<<endl;
}
}
