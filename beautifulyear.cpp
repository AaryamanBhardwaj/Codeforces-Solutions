#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int y,n,t=0,h=0,th=0,o=0,k=0;
    cin>>y;
    while(true){
        y=y+1;
    o=y%10;
    t=(y/10)%10;
    h=(y/100)%10;
    th=(y/1000)%10;
    if(th!=h&&th!=t&&th!=o&&h!=t&&h!=o&&t!=o)
    {break;}
    }
    cout<<y;
    return 0;
}