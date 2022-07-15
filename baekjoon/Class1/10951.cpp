
#include "default.h"
int main()
{

    for (;;)
    {
        int b, c;
        cin >> b >> c;
        if (c <= 0 || c >= 10 || b <= 0 || b >= 10)
            break;
        if (!cin)
            break;
        cout << b + c << endl;
    }
}