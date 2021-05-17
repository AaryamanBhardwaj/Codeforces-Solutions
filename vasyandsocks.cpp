#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{ 
    int m,n,s=0,i=1;
    cin>>n>>m;
    s=s+n;
    while(true)
    {
        if((i*m)<=s)
        {s=s+1;i++;}
        else
        break;
    }
    cout<<s;
}
