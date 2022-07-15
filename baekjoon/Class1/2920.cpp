#include "default.h"
int main()
{
    array<int,8> a;
    for(int i=0;i<8;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<7;i++)
    {
        if(a[i+1]!=a[i]+1)
        {
            for(int j=0;j<7;j++)
            {
                if(a[j+1]!=a[j]-1)
                {
                    cout<<"mixed"<<endl;
                    return 0;
                }
                
            }
            cout<<"descending"<<endl;
            return 0;
        }
        
    }
    cout<<"ascending"<<endl;
}