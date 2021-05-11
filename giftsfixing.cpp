#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long n,c1=0,c2=0,c=0, min1=0,min2=0;
   for(int i=0;i<t;i++)
   {
       min1=0;min2=0;c1,c2,c=0;
    cin>>n;
     int a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    min1=*min_element(a,a+n);
    min2=*min_element(b,b+n);
    for(long long i=0;i<n;i++)
    {
        if(a[i]!=min1&&b[i]!=min2)
        {
            c1=c1+(a[i]-min1);
            c2=c2+(b[i]-min2);
             c=c+max(c1,c2);
             c1=0;
             c2=0;
        }
        else if(a[i]!=min1&&b[i]==min2)
        {
            c=c+(a[i]-min1);
        }
        else if(a[i]==min1&&b[i]!=min2)
        {
            c=c+(b[i]-min2);
        } 
    }
    cout<<c<<endl;
   }
}
