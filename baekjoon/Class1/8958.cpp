#include "default.h"
int guhagi(string a)
{
    int sum=1;
    int twosum=0;
    for (int i = 0; i < a.size() ; i++)
    {
        if (a[i] == 'O')
        {
            
            twosum += sum;
            sum++;
        }
        else
        {
            sum=1;
        }
    }
    return twosum;
}
int main()
{
  int a;
  cin>>a;
  vector<int> b(a);
  vector<int> sums(a);
  for(int i=0;i<b.size();i++)
  {
    string temp;
    cin>>temp;
   sums[i]=guhagi(temp);
  }
  for(auto &x:sums)
  {
    cout<<x<<endl;
  }
}