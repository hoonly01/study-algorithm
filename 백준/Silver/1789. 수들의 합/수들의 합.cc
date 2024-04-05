#include <iostream>
using namespace std;

int main()
{
    long long int n;
    int cnt = 0;

    cin >> n;

    while(n - cnt > 0)
    {
        cnt++;
        n -= cnt;
        
    }

    cout << cnt << endl;

    return 0;
}