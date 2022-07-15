#include "default.h"
int main()
{

    for (;;)
    {
        int b, c;
        cin >> b >> c;
            if(b==0&&c==0)
            break;
        
        cout << b + c << endl;
    }
}