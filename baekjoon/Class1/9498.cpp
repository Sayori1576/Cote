#include "default.h"
int main()
{
    int a;
    cin>>a;
    if(a<=100 and a>=90)
    {
        cout<<"A"<<endl;
    }
    else if(a>=80)
    {
        cout<<"B"<<endl;
    }
    else if(a>=70)
    {
        cout<<"C"<<endl;
    }
    else if(a>=60)
    {
        cout<<"D"<<endl;
    }
    else{
        cout<<"F"<<endl;
    }
}