#include <iostream>
using namespace std;

int main()
{
    int p1=100, p2=100;
    int n;
    int score1, score2;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> score1 >> score2;

        if(score1 > score2)
            p2 -= score1;
        else if(score2 > score1)
            p1 -= score2;
    }

    cout << p1 << endl << p2 << endl;

    return 0;
}