#include "default.h"
vector<int> gakjari(int a);
int main(int, char**) 
{
    vector<int> b;
   for(int i=0;i<5;i++)
   {
       int temp;
       cin>>temp;
       b.push_back(temp);
   }
   int sum=0;
   for(int i=0;i<b.size();i++)
   {
       sum+=pow(b[i],2);
   }
   cout<<sum%10<<endl;
}
vector<int> gakjari(int a)
{
    vector<int> temp;
    string b=to_string(a);
    for(int i=0;i<b.size();i++)
    {
       temp.push_back(b[i]-'0'); 
    }
    return temp;
}