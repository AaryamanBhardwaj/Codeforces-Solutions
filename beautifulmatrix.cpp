#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[5][5],r,s,c=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    for( r=0;r<5;r++)
    {
        for( s=0;s<5;s++)
        {
            if(a[r][s]!=0)
            {cout<<abs(r-2)+abs(s-2);break;
            }
           
        }
    }
    
    return 0;
}