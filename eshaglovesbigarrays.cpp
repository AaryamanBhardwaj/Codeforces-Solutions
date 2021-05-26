#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(NULL);
    int n,t,j,s,c,number;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        j=0,s=0,c=1,number=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        while(a[j]==a[j+1])
        {
            c++;
            s=s+a[j];
            j++;
        }
        s=s+a[j];
        c=c+1;
        for(int i=j+1;i<n;i++)
        {
            if(a[i]>s/c)
            number++;
        }
        cout<<number<<endl;
    }
}
