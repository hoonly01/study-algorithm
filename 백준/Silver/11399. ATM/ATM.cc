#include <iostream>
using namespace std;

int main()
{
    int n, time;
    int num[1000] = {0,};
    int now = 0, sum = 0;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> time;
        num[time-1]++;
    }

    for(int i=0; i<1000; i++)
    {
        while(num[i] > 0)
        {
            now = now + i+1;
            sum = sum + now;
            num[i]--;
        }
    }
    cout << sum << endl;

    return 0;
}