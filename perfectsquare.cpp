#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(NULL);
    int n,c=0;string check;long sr,s;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            cout<<a[i];
            return 0;
        }
        sr=sqrt(a[i]);
        s=pow(sr,2);
        if(s!=a[i])
        {cout<<a[i];
        return 0;
        }
    }
}
        /*for(int i=0;i<check.length();i++)
        {
            if(check[i]=='.')
            {
                if(check[i+1]!='0')
                c++;
            }
        }
        if(c>0)
        {
        cout<<a[i];
        return 0;
        }
    }
}
  */  