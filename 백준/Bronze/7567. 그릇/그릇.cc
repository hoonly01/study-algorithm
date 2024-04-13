#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int height = 10;

    cin >> str;

    for(int i=1; i<str.length(); i++)
    {
        if(str[i-1] == str[i])
            height += 5;
        else
            height += 10;
    }
    cout << height << endl;
    
    return 0;
}