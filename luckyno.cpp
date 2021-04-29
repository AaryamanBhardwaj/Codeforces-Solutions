#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,c=0,s;
    cin>>n;
 for(int i=n;i>0;i--)
    {
        if(n%10==4||n%10==7)
        {
        c++;
        }
        n=n/10;
        
    }
    if(c==4||c==7)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}