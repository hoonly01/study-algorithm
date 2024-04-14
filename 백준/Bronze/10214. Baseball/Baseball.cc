#include <iostream>
using namespace std;

int main()
{
    int yonsei = 0, korea = 0;
    int n;
    int score1, score2;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        yonsei = 0, korea = 0;
        for (int j = 0; j < 9; j++)
        {
            cin >> score1 >> score2;
            yonsei += score1;
            korea += score2;
        }
        if (yonsei > korea)
            cout << "Yonsei" << endl;
        else if (yonsei < korea)
            cout << "Korea" << endl;
        else
            cout << "Draw" << endl;
    }

    return 0;
}