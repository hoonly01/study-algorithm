#include <iostream>
using namespace std;

int main()
{
    int n, num;
    int max = -987654321;
    int mem = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> num;
        if (num > max)
        {
            max = num;
            mem = i;
        }
    }

    cout << max << '\n' << mem + 1 << endl;

    return 0;
}