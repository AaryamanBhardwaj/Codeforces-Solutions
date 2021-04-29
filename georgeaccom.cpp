#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n,p,q,c=0,a[2];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
        cin>>a[j];
        }
        if((a[1]-a[0])>=2)
        c++;
    }
    cout<<c;
}
