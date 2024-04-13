#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string str;
    int score, now;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> str;
        score = 0;
        now = 0;
        for(int j=0; j<str.length(); j++)
        {
            if(str[j] == 'O')
            {
                now++;
                score += now;
            }
            else
                now = 0;
        }
        cout << score << endl;
    }

    return 0;
}