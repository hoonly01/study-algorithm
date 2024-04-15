#include <iostream>
#include <string>
using namespace std;

int main()
{
    int alp[26] = {0,};
    string str;

    cin >> str;
    
    for(int i=0; i<str.length(); i++)
    {
        if(alp[int(str[i])-97] == 0)
        {
            alp[int(str[i])-97] = i+1;
        }
    }

    for(int i=0; i<26; i++)
    {
        if(alp[i] == 0)
            cout << -1 << " ";
        else
            cout << alp[i]-1 << " ";
    }
    
    return 0;
}