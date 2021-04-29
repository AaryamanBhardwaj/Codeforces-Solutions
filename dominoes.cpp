#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,n,s;
    cin>>m>>n;
    if(m>=1&&n>=1&&m<=16&&n<=16)
    {
        s=abs((m*n)/2);
    }
    cout<<s;
}

