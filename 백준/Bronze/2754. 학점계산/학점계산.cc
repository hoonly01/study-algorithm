#include <iostream>
using namespace std;

int main()
{
    char a, b;
    float score = 0;

    cin >> a >> b;

    if (a == 'A')
        score = 4;
    else if (a == 'B')
        score = 3;
    else if (a == 'C')
        score = 2;
    else if (a == 'D')
        score = 1;

    if(b == '+')
        score += 0.3;
    else if(b == '-')
        score -= 0.3;

    cout << fixed;
    cout.precision(1);
    cout << score << endl;
}