#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int n;
    int cnt = 0;

    cin >> n;
    cin >> str;

    for(int i=0; i<str.length(); i++)
        cnt += int(str[i])-48;
    cout << cnt << endl;

    return 0;
}
