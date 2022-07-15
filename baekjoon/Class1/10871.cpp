#include "default.h"
int main()
{
  
    int b,c;
    cin>>b>>c;
    vector<int> a(b);
    vector<int> d;
    for(int i=0;i<b;i++)
    {
        int temp;
        cin>>temp;
        a[i]=temp;
    }
    for(auto&x:a)
    {
        if(x<c)
            d.push_back(x);
    }
    for(auto&x:d)
    {
        cout<<x<<" ";
    }
}