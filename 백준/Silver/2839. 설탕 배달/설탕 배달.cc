#include <iostream>
using namespace std;

int main()
{
    int n;
    int cnt = 0;

    cin >> n;
    
    while(n>0)
    {
        if(n % 5 == 0)
        {
            cnt += n/5;
            n = 0;
        }
        else
        {
            n -= 3;
            cnt++;
        }
    }

    if(n == 0)
        cout << cnt << endl;
    else
        cout << -1 << endl;

    return 0;
}