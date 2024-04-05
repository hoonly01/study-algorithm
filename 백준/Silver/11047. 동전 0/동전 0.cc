#include <iostream>
using namespace std;

int main()
{
    int n, k, val;
    int coin[10];
    int cnt = 0;

    cin >> n >> k;

    for(int i=0; i<n; i++)
    {
        cin >> val;
        coin[i] = val;
    }
    // n=10 -> coin - 0~9번방
    while(n>=1)
    {
        if(k >= coin[n-1])
        {
            k -= coin[n-1];
            cnt++;
        }
        else
        {
            n--;
        }
    }

    cout << cnt << endl;

    return 0;
}