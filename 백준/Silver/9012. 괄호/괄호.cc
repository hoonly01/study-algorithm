#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int cnt;
    string str;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> str;
        cnt = 0;

        for(int j=0; j<str.length(); j++)
        {
            if(str[j] == '(')
                cnt++;
            else
                cnt--;
            
            if(cnt < 0)
                break;
        }
        if(cnt == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}