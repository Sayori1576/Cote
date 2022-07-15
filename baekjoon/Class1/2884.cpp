#include "default.h"
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=a*60+b;
    c-=45;
    if(c<0)
    {
        c=60*24+c;
    }
    cout<<c/60<<" "<<c%60;
}