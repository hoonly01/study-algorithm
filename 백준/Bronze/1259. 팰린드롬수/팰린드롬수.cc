#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    while (1)
    {
        string str1, str2;
        cin >> str1;
        str2 = str1;
        reverse(str2.begin(), str2.end());

        if(str1.compare("0") == 0)
            return 0;
        else
        {
            if(str1.compare(str2) == 0)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
}
    