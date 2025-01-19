#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    while (1)
    {
        cin >> a >> b >> c;
        a *= a;
        b *= b;
        c *= c;

        if(!(a+b+c))
            return 0;

        if (a + b == c)
            cout << "right" << endl;
        else if(a + c == b)
            cout << "right" << endl;
        else if(b + c == a)
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }
}